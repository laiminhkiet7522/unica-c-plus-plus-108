#include <iostream>

using namespace std;

int tinhTongHaiSo(int a, int b);
void xuatDuLieu(int x);
void outPut(); //prototype
int main()
{
    int a,b;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    int result = tinhTongHaiSo(a,b);
    cout<<"Tong cua "<<a<<"+"<<b<<"="<<result<<endl;
    int result2 = tinhTongHaiSo(99,1);
    cout<<"Tong thu hai"<<"="<<result2<<endl;
    int result3 = tinhTongHaiSo(999,1);
    cout<<"Tong thu ba =";
    xuatDuLieu(result3);
    cout<<"Ham goi ham:\n";
    cout<<"Tong thu tu=";
    outPut();
    return 0;
}
int tinhTongHaiSo(int a, int b)
{
    return a+b;
}
void xuatDuLieu(int x)
{
    cout<<x<<endl;
}
void outPut()
{
    int result=tinhTongHaiSo(100,100);
    xuatDuLieu(result);
}
