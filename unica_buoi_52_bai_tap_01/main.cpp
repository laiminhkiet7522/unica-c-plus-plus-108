#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Nhap vao so luong phan tu cua mang 1 chieu: ";
        cin>>n;
    }
    while(n<=0);
    int M[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap phan tu thu "<<i<<": ";
        cin>>M[i];
    }
    cout<<"Mang 1 chieu ban vua nhap la: \n";
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
    cout<<"\nMang 1 chieu sau khi dao nguoc la: \n";
    for(int i=n-1; i>=0; i--)
    {
        cout<<M[i]<<"\t";
    }
    return 0;
}
