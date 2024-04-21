#include <iostream>
#include <string.h>
using namespace std;
void xoaKhoangTrangDuThua(char *str)
{
    int j=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
        else if(j>0&&str[i+1]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    if(str[j-1]==' ')
    {
        str[j-1]='\0';
    }
    else
    {
        str[j]='\0';
    }
}
char *layTen(char *str)
{
    int k=0;
    for(int i=strlen(str)-1; i>=0; i--)
    {
        if(str[i]==' ')
        {
            k=i+1;
            break;
        }
    }

    char *strTen = new char[10];
    int i2=0;
    for(int i=k; i<strlen(str); i++)
    {
        strTen[i2]=str[i];
        i2++;
    }
    strTen[i2]='\0';
    return strTen;
}
int main()
{
    char *str=new char[255];
    strcpy(str, "  Lai  Minh  Kiet  ");
    cout<<"Chuoi ban dau la:"<<str;
    cout<<"\nDo dai chuoi = "<<strlen(str);
    xoaKhoangTrangDuThua(str);
    cout<<"\n\nChuoi sau khi xoa khoang trang du thua la:"<<str;
    cout<<"\nDo dai chuoi = "<<strlen(str);

    char *ten = layTen(str);
    cout<<"\nTen la:"<<ten<<endl;
    return 0;
}
