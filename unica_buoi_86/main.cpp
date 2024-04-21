#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[255];
    cout<<"Nhap chuoi: ";
    cin.getline(str,255);
    cout<<"Chuoi ban vua nhap la: ";
    cout<<str;
    cout<<"\nChuoi dao nguoc la: ";
    for(int i=strlen(str)-1;i>=0;i--)
    {
        cout<<str[i];
    }
    return 0;
}
