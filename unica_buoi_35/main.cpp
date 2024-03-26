#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /*
    Dùng 2 vòng lặp for
    int x;
    int n;
    double s=0;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        double tu = pow(x,i);
        int mau = 1;
        for(int j=1; j<=i; j++)
        {
            mau = mau*j;
        }
        s=s + tu/mau;
    }
    cout<<"S = "<<s<<endl;
    return 0;
    */

    //Dùng 1 vòng lặp for
    int x;
    int n;
    double s = 0;
    double tu = 1;
    int mau = 1;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        tu*=x;
        mau*=i;
        s = s + tu/mau;
    }
    cout<<"S = "<<s<<endl;
    return 0;
}
