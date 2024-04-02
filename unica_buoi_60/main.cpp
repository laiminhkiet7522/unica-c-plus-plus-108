#include <iostream>

using namespace std;
void nhapMang(int M[], int n);
void xuatMang(int M[], int n);
int timK(int M[], int n, int k);
void sapXepMangTangDan(int M[], int n);
int main()
{
    int n;
    do
    {
        cout<<"Nhap so phan tu cua mang: ";
        cin>>n;
    }
    while(n<=0);
    int M[n];
    nhapMang(M,n);
    cout<<"Mang ban vua nhap la:\n";
    xuatMang(M,n);
    int k;
    cout<<"\nNhap k de tim: ";
    cin>>k;
    int timKiem = timK(M,n,k);
    if(timKiem==-1)
    {
        cout<<"Khong thay "<<k<<" trong mang"<<endl;
    }
    else
    {
        cout<<"Tim thay "<<k<<" tai vi tri thu "<<timKiem<<endl;
    }
    sapXepMangTangDan(M,n);
    cout<<"\nMang sau khi sap xep tang dan:\n";
    xuatMang(M,n);
    return 0;
}
void nhapMang(int M[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap M["<<i<<"]:";
        cin>>M[i];
    }
}
void xuatMang(int M[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
}
int timK(int M[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(M[i]==k)
        {
            return i;
        }
    }
    return -1;
}
void sapXepMangTangDan(int M[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(M[i]>M[j])
            {
                int temp;
                temp=M[i];
                M[i]=M[j];
                M[j]=temp;
            }
        }
    }
}
