#include <iostream>

using namespace std;
int tinhTongMau(int);
double tinhTongThuNhat(int);
double tinhLuyThua(double, double);
double tinhTongThuHai(double, double);
int main()
{
    int n1;
    double x, n2;
    double result1 = tinhTongThuNhat(n1);
    cout<<"Tong S(n) thu nhat = "<<result1<<endl;
    double result2 = tinhTongThuHai(x, n2);
    cout<<"Tong S(x,n) thu hai = "<<result2<<endl;
    return 0;
}

int tinhTongMau(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
double tinhLuyThua(double x, double n)
{
    double result = 1.0;
    for(int i=1; i<=n; i++)
    {
        result=result*x;
    }
    return result;
}
double tinhTongThuNhat(int n)
{
    do
    {
        cout<<"Nhap vao so n nguyen duong (n>0): ";
        cin>>n;
    }
    while(n<=0);
    double sum = 0.0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + (1.0/tinhTongMau(i));
    }
    return sum;
}
double tinhTongThuHai(double x, double n)
{
    do
    {
        cout<<"Nhap vao so x: ";
        cin>>x;
        cout<<"Nhap vao so n nguyen duong (n>0): ";
        cin>>n;
    }
    while(n<=0);
    double sum = 0.0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + (tinhLuyThua(x, i)/(tinhTongMau(i)));
    }
    return sum;
}
