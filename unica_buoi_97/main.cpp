#include <iostream>
#include <math.h>
using namespace std;
struct Diem
{
    double x;
    double y;
};
double tinhKhoangCach(Diem a, Diem b);
double doDaiCacDiem(Diem arrDiem[], int n);
void nhapToaDoCacDiem(Diem arrDiem[], int n);
void xuatToaDoCacDiem(Diem arrDiem[], int n);
int main()
{
    Diem a;
    a.x=0;
    a.y=2;

    Diem b;
    b.x=0;
    b.y=4;

    double khoangCach = tinhKhoangCach(a,b);
    cout<<"Khoang cach tu A("<<a.x<<";"<<a.y<<")->"<<"B("<<b.x<<";"<<b.y<<") = "<<khoangCach<<endl;

    Diem arrDiem[3];
    nhapToaDoCacDiem(arrDiem, 3);
    cout<<"\nDanh sach cac diem ban vua nhap;\n";
    xuatToaDoCacDiem(arrDiem, 3);
    cout<<"\nTong do dai = "<<doDaiCacDiem(arrDiem,3);
    cout<<endl;
    return 0;
}
double tinhKhoangCach(Diem a, Diem b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
double doDaiCacDiem(Diem arrDiem[], int n)
{
    double tongKhoangCach=0;
    for(int i=0; i<n-1; i++)
    {
        double khoangCach=tinhKhoangCach(arrDiem[i], arrDiem[i+1]);
        tongKhoangCach+=khoangCach;
    }
    return tongKhoangCach;
}
void nhapToaDoCacDiem(Diem arrDiem[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\nNhap diem thu "<<i<<endl;
        cout<<"Nhap toa do x:";
        cin>>arrDiem[i].x;
        cin.ignore();
        cout<<"Nhap toa do y:";
        cin>>arrDiem[i].y;
        cin.ignore();
    }
}
void xuatToaDoCacDiem(Diem arrDiem[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"("<<arrDiem[i].x<<";"<<arrDiem[i].y<<")"<<endl;
    }
}
