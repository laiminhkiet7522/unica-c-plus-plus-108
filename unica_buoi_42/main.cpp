#include <iostream>

using namespace std;
#define N 10

int main()
{
    int M[N];
    cout<<"Nhap gia tri cho cac phan tu: "<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<"Nhap M["<<i<<"]: ";
        cin>>M[i];
    }
    cout<<"Mang sau khi nhap la: "<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<"M["<<i<<"]: "<<M[i]<<endl;
    }
    cout<<"Mang xuat nguoc la: "<<endl;
    for(int i=N-1; i>=0; i--)
    {
        cout<<"M["<<i<<"]: "<<M[i]<<endl;
    }
    return 0;
}
