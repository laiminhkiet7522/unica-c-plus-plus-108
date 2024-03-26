#include <iostream>
using namespace std;

// Hàm tính giai thừa
long long tinhGiaiThua(int n)
{
    long long result = 1;
    for(int i=2; i<=n; i++)
    {
        result = result * i;
    }
    return result;
}

// Hàm tính lũy thừa
double tinhLuyThua(double x, int n)
{
    double result = 1.0;
    for(int i=1; i<=n; i++)
    {
        result = result * x;
    }
    return result;
}

int main()
{
    int n;
    double x, sum = 0.0;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        sum = sum + tinhLuyThua(x, 2*i+1)/tinhGiaiThua(2*i+1);
    }
    cout<<"S("<<x<<","<<n<<") = "<<sum<<endl;
    return 0;
}
