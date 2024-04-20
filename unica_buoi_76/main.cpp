#include <iostream>

using namespace std;
int *capPhatBoNho(int n);
void nhapMang(int *&pM, int n);
void xuatMang(int *pM, int n);
int *danhSachMax(int *pM, int n);
void sapXepGiamDan(int *&pM, int n);
int main()
{
    int *pM=capPhatBoNho(5);
    nhapMang(pM,5);
    cout<<"\nMang ban vua nhap la:\n";
    xuatMang(pM,5);
    int *pX=danhSachMax(pM,5);
    cout<<"\n3 phan tu lon nhat la:\n";
    xuatMang(pX,3);
    return 0;
}
int *capPhatBoNho(int n)
{
    int *pM=new int[n];
    return pM;
}
void nhapMang(int *&pM, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap phan tu thu ["<<i<<"]: ";
        cin>>*(pM+i);
    }
}
void xuatMang(int *pM, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(pM+i)<<"\t";
    }
}
int *danhSachMax(int *pM, int n)
{
    int m = n>3?3:n;
    int *pX=capPhatBoNho(m);
    sapXepGiamDan(pM,n);
    for(int i=0; i<m; i++)
    {
        *(pX+i)=*(pM+i);
    }
    return pX;
}
void sapXepGiamDan(int *&pM, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int a=*(pM+i);
            int b=*(pM+j);
            if(a<b)
            {
                int temp=*(pM+i);
                *(pM+i)=*(pM+j);
                *(pM+j)=temp;
            }
        }
    }
}
