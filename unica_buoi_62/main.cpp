#include <iostream>
#include <math.h>
using namespace std;
bool kiemTraTamGiac(double, double, double);
double tinhChuVi(double, double, double);
double tinhDienTich(double, double, double);

bool kiemTraTamGiac(double a, double b, double c)
{
    if(a+b<=c || a+c<=b || b+c<=a)
    {
        return false;
    }
    return true;
}
double tinhChuVi(double a, double b, double c)
{
    return a+b+c;
}
double tinhDienTich(double a, double b, double c)
{
    double nuaChuVi=tinhChuVi(a,b,c)/2.0;
    double dienTichTamGiac=sqrt(nuaChuVi*(nuaChuVi-a)*(nuaChuVi-b)*(nuaChuVi-c));
    return dienTichTamGiac;
}
int main()
{
    double a,b,c;
    do
    {
        cout<<"Nhap canh a: ";
        cin>>a;
        cout<<"Nhap canh b: ";
        cin>>b;
        cout<<"Nhap canh c: ";
        cin>>c;
        if(a<0||b<0||c<0)
        {
            cout<<"-----Vui long nhap lai-----"<<endl;
        }
    }
    while(a<0||b<0||c<0);
    bool kiemTra = kiemTraTamGiac(a,b,c);
    if(kiemTra)
    {
        double chuVi = tinhChuVi(a,b,c);
        double dienTich = tinhDienTich(a,b,c);
        cout<<"Chu vi cua tam giac la: "<<chuVi<<endl;
        cout<<"Dien tich cua tam giac la: "<<dienTich<<endl;
    }
    else
    {
        cout<<"Ban da nhap tam giac khong hop le"<<endl;
    }
    return 0;
}
