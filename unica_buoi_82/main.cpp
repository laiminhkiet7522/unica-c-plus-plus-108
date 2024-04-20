#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[25];
    strcpy(str1,"Hello");
    char *p=strchr(str1,'l');//Tra ve con tro den lan xuat hien dau tien cua ky tu
    if(p!=NULL)
    {
        cout<<"Tim thay 'l' o vi tri: "<<(p-str1)<<endl;
    }
    else
    {
        cout<<"Khong tim thay 'l'"<<endl;
    }

    char str2[100];
    strcpy(str2, "Lai Minh Kiet Is The Best");
    char *p2=strstr(str2,"Kiet");//Tim chuoi con 'Kiet' trong chuoi cha str2
    if(p!=NULL)
    {
        cout<<"Tim thay 'Kiet' o vi tri: "<<(p2-str2)<<endl;
    }
    else
    {
        cout<<"Khong tim thay 'Kiet'"<<endl;
    }
    return 0;
}
