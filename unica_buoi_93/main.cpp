#include <iostream>
#include <string.h>
using namespace std;
struct Book
{
    char title[100];
    char author[100];
    int pages;
    float price;
};
int main()
{
    Book b;
    cout<<"Nhap thong tin cho cuon sach\n";
    cout<<"Nhap ten sach:";
    cin.getline(b.title,100);
    cout<<"Nhap ten tac gia:";
    cin.getline(b.author,100);
    cout<<"Nhap so trang:";
    cin>>b.pages;
    cout<<"Nhap gia ban:";
    cin>>b.price;
    cout<<"--------------------\n";
    cout<<"Thong tin sach ban vua nhap la\n";
    cout<<"Ten sach:"<<b.title<<endl;
    cout<<"Tac gia:"<<b.author<<endl;
    cout<<"So trang:"<<b.pages<<endl;
    cout<<"Gia ban:"<<b.price<<endl;

    Book a=b;
    cout<<"--------------------\n";
    cout<<"Thong tin sach sau khi duoc tham chieu la\n";
    cout<<"Ten sach:"<<a.title<<endl;
    cout<<"Tac gia:"<<a.author<<endl;
    cout<<"So trang:"<<a.pages<<endl;
    cout<<"Gia ban:"<<a.price<<endl;

    cout<<"--------------------\n";
    strcpy(a.title, "Thanh xuan cua toi");
    strcpy(a.author, "Xuan Dieu");
    a.pages=500;
    a.price=99999;
    cout<<"Thong tin sach sau khi thay doi (a) la\n";
    cout<<"Ten sach:"<<a.title<<endl;
    cout<<"Tac gia:"<<a.author<<endl;
    cout<<"So trang:"<<a.pages<<endl;
    cout<<"Gia ban:"<<a.price<<endl;

    cout<<"Thong tin sach sau khi thay doi (b) la\n";
    cout<<"Ten sach:"<<b.title<<endl;
    cout<<"Tac gia:"<<b.author<<endl;
    cout<<"So trang:"<<b.pages<<endl;
    cout<<"Gia ban:"<<b.price<<endl;
    return 0;
}
