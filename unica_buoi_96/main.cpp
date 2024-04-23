#include <iostream>
#include <string.h>
using namespace std;
struct DiaChi
{
    char tenDuong[50];
    char quan[50];
    char tinhThanh[50];
};
struct NhanVien
{
    int ma;
    char ten[100];
    int tuoi;
    DiaChi diaChiCoQuan;
    DiaChi diaChiNhaRieng;
};
int main()
{
    NhanVien nv;
    nv.ma=1;
    strcpy(nv.ten,"Lai Minh Kiet");
    nv.tuoi=22;
    strcpy(nv.diaChiCoQuan.tenDuong, "123 Le Duan");
    strcpy(nv.diaChiCoQuan.quan, "Quan 1");
    strcpy(nv.diaChiCoQuan.tinhThanh, "Thanh pho Ho Chi Minh");
    strcpy(nv.diaChiNhaRieng.tenDuong, "17 Le Loi");
    strcpy(nv.diaChiNhaRieng.quan, "Quan 3");
    strcpy(nv.diaChiNhaRieng.tinhThanh, "Thanh pho Ho Chi Minh");
    cout<<"-----Thong tin cua nhan vien Kiet-----\n";
    cout<<"Ma nhan vien:"<<nv.ma<<endl;
    cout<<"Ten nhan vien:"<<nv.ten<<endl;
    cout<<"Tuoi:"<<nv.tuoi<<endl;
    cout<<"Dia chi co quan:"<<nv.diaChiCoQuan.tenDuong<<", "<<nv.diaChiCoQuan.quan<<", "<<nv.diaChiCoQuan.tinhThanh<<endl;
    cout<<"Dia chi nha rieng:"<<nv.diaChiNhaRieng.tenDuong<<", "<<nv.diaChiNhaRieng.quan<<", "<<nv.diaChiNhaRieng.tinhThanh<<endl;


    NhanVien *pNv=new NhanVien;
    pNv->ma=2;
    strcpy(pNv->ten, "Nguyen Van A");
    pNv->tuoi=22;
    strcpy(pNv->diaChiCoQuan.tenDuong, "10 Nguyen Trai");
    strcpy(pNv->diaChiCoQuan.quan, "Quan 11");
    strcpy(pNv->diaChiCoQuan.tinhThanh, "Thanh pho Ho Chi Minh");
    strcpy(pNv->diaChiNhaRieng.tenDuong, "15 Tu Thuc");
    strcpy(pNv->diaChiNhaRieng.quan, "Quan 2");
    strcpy(pNv->diaChiNhaRieng.tinhThanh, "Thanh pho Thu Duc");
    cout<<"\n\n-----Thong tin cua nhan vien A-----\n";
    cout<<"Ma nhan vien:"<<pNv->ma<<endl;
    cout<<"Ten nhan vien:"<<pNv->ten<<endl;
    cout<<"Tuoi:"<<pNv->tuoi<<endl;
    cout<<"Dia chi co quan:"<<pNv->diaChiCoQuan.tenDuong<<", "<<pNv->diaChiCoQuan.quan<<", "<<pNv->diaChiCoQuan.tinhThanh<<endl;
    cout<<"Dia chi nha rieng:"<<pNv->diaChiNhaRieng.tenDuong<<", "<<pNv->diaChiNhaRieng.quan<<", "<<pNv->diaChiNhaRieng.tinhThanh<<endl;
    return 0;
}
