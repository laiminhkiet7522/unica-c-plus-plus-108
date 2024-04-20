#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[25];
    char s2[25];

    cout<<"Nhap chuoi s1: ";
    cin.getline(s1,25);
    strcpy(s2,s1);//Copy tat ca chuoi s1 cho s2
    cout<<"\nChuoi s1 ban vua nhap la: ";
    cout<<s1<<endl;
    cout<<"Chuoi s2 coppy tu s1 la: ";
    cout<<s2<<endl;

    char str3[5];
    strncpy(str3,s1,4);//Copy n ky tu tu s1 cho s3
    cout<<"\nChuoi s3 coppy tu s1 la: ";
    cout<<str3<<endl;
    return 0;
}
