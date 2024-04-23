#include <iostream>

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
    char tuoi[3];
    bool gioiTinh;
    DiaChi diaChiThuongTru;
    DiaChi diaChiTamTru;
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
