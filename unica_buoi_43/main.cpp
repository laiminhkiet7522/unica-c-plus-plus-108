#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    int M[n];
    for(int i=0; i<n; i++)
    {
        cout<<"M["<<i<<"]: ";
        cin>>M[i];
    }
    cout<<"Mang ban vua nhap la: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
    int k;
    bool check = false;
    int count = 0;
    cout<<"\nNhap k muon tim: ";
    cin>>k;
    for(int i=0; i<n; i++)
    {
        if(M[i] == k)
        {
            check=true;
            //break;
            count++;
       }
    }
    if(check)
    {
        cout<<k<<" duoc tim thay trong mang"<<endl;
        cout<<k<<" xuat hien "<<count<<" lan trong mang"<<endl;
    }
    else
    {
        cout<<k<<" khong duoc tim thay trong mang"<<endl;
    }
    return 0;
}
