#include <iostream>
#include <string.h>
using namespace std;
struct SinhVien
{
    int ma;
    char ten[100];
};
void nhap(SinhVien dssv[], int siSo);
void xuat(SinhVien dssv[], int siSo);
int main()
{
    int siSo=3;
    SinhVien sv[siSo];
    nhap(sv,siSo);
    xuat(sv,siSo);
    return 0;
}
void nhap(SinhVien dssv[], int siSo)
{
    for(int i=0; i<siSo; i++)
    {
        cout<<"Nhap thong tin sinh vien thu "<<i<<endl;
        cout<<"Nhap ma sinh vien:";
        cin>>dssv[i].ma;
        cout<<"Nhap ho ten sinh vien:";
        cin.ignore();
        cin.getline(dssv[i].ten,100);
    }
}
void xuat(SinhVien dssv[], int siSo)
{
    for(int i=0; i<siSo; i++)
    {
        cout<<dssv[i].ma<<"\t"<<dssv[i].ten<<endl;
    }
}
