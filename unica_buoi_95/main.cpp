#include <iostream>
#include <string.h>
using namespace std;
struct SinhVien
{
    int ma;
    char ten[100];
};
int main()
{
    SinhVien teo;
    teo.ma=23410164;
    strcpy(teo.ten,"Teo");
    cout<<"Thong tin cua Teo:\n";
    cout<<teo.ma<<"\t"<<teo.ten<<endl;

    SinhVien *pTeo=&teo;
    cout<<"\nThong tin cua Teo theo con tro:\n";
    cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;

    pTeo->ma=113;
    strcpy(pTeo->ten, "Nguyen Van A");
    cout<<"\nThong tin cua Teo sau khi dung con tro thay doi:\n";
    cout<<teo.ma<<"\t"<<teo.ten<<endl;

    teo.ma=115;
    strcpy(teo.ten,"Mac Giang Het");
    cout<<"\nThong tin cua Teo theo con tro:\n";
    cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;

    SinhVien *pTy;
    pTy=new SinhVien;
    pTy->ma=23410165;
    strcpy(pTy->ten,"Ty");
    cout<<"\nThong tin cua Ty:\n";
    cout<<pTy->ma<<"\t"<<pTy->ten<<endl;

    SinhVien *pTy2=pTy;
    pTy2->ma=100;
    strcpy(pTy2->ten,"Ty2");
    cout<<"\nThong tin cua pTy sau khi pTy2 thay doi:\n";
    cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
    return 0;
}
