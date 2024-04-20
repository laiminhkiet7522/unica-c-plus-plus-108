#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[25];
    char str2[25];
    strcpy(str1,"Kiet");
    strcpy(str2,"-IT");
    strcat(str1,str2);//Noi chuoi str2 vao duoi cua chuoi str1
    cout<<"Chuoi str1 la: ";
    cout<<str1;

    char ho[25];
    char ten[25];
    char hoVaTen[50];
    cout<<"\n\nNhap ho: ";
    cin.getline(ho,25);
    cout<<"Nhap ten: ";
    cin.getline(ten,25);
    strcat(hoVaTen,ho);
    strcat(hoVaTen," ");
    strcat(hoVaTen,ten);
    cout<<"Ho va ten la: ";
    cout<<hoVaTen;

    char str3[25];
    char str4[25];
    strcpy(str3,"To be ");
    strcpy(str4,"continue");
    strncat(str3,str4,4);//Noi n ky tu tu chuoi str4 vao cuoi chuoi str3
    cout<<"\n\nChuoi Str3 sau khi noi mot phan la: ";
    cout<<str3;
    return 0;
}
