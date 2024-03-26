#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout<<"Nhap n la 1 so nguyen duong: ";
    cin>>n;
    do
    {
        int so_du = n%10;
        n=n/10;
        sum = sum + so_du;
    }
    while(n>0);
    cout<<"S = "<<sum<<endl;
    return 0;
}
