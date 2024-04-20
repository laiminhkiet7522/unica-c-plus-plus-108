#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[25];

    cout<<"Moi ban nhap chuoi: ";
    cin.getline(str1,25);

    cout<<"Chuoi ban vua nhap la: ";
    cout<<str1;

    char *str2 = new char[25];

    cout<<"\n\nMoi ban nhap chuoi: ";
    gets(str2);

    cout<<"Chuoi ban vua nhap la: ";
    puts(str1);

    char str3[255];

    cout<<"\nMoi ban nhap chuoi: ";
    cin.getline(str3,255);

    cout<<"Chuoi ban vua nhap la: ";
    cout<<str3;

    cout<<"\nKich thuoc chuoi la: "<<strlen(str3)<<endl;

    return 0;
}
