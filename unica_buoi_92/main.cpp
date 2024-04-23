#include <iostream>
#include <string.h>
using namespace std;
struct DiaChi
{
    char soNha[50];
    char tenDuong[50];
    char quan[50];
    char huyen[50];
    char xa[50];
};
struct SinhVien
{
    char hoTen[50];
    int tuoi;
    bool gioiTinh;
    char maSoSinhVien[8];
    DiaChi diaChiThuongTru;
    DiaChi diaChiTamTru;
} kiet, phuc, thong, tuan;
int main()
{
    strcpy(kiet.hoTen, "Lai Minh Kiet");
    kiet.tuoi=22;
    kiet.gioiTinh=false;
    strcpy(kiet.maSoSinhVien, "23410164");
    cout<<"--------------------\n";
    cout<<"Ho ten sinh vien:"<<kiet.hoTen<<endl;
    cout<<"Ma so sinh vien:"<<kiet.maSoSinhVien<<endl;
    cout<<"Tuoi sinh vien:"<<kiet.tuoi<<endl;
    cout<<"Gioi tinh sinh vien:"<<(kiet.gioiTinh==false?"Nam":"Nu")<<endl;

    cout<<"--------------------\n";
    SinhVien sv;
    strcpy(sv.hoTen, "Nguyen Van A");
    cout<<"Ho ten sinh vien:"<<sv.hoTen<<endl;
    return 0;
}
