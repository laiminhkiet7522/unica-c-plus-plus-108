#include <iostream>
#include <string.h>
using namespace std;
bool kiemTraNamNu(char *str)
{
    //SV1;Obama;Male
    int j=0;
    for(int i=strlen(str)-1; i>=0; i--)
    {
        if(str[i]==';')
        {
            j=i;
            break;
        }
    }

    char strGioiTinh[6];
    int i2=0;
    for(int i=j+1; i<strlen(str); i++)
    {
        strGioiTinh[i2]=str[i];
        i2++;
    }
    strGioiTinh[i2]='\0';
    if(strcmp(strGioiTinh,"Male")==0)
        return false;
    return true;
}
int main()
{
    char **dssv=new char*[5];
    for(int i=0; i<5; i++)
    {
        *(dssv+i)=new char[255];
    }
    strcpy(*(dssv+0),"SV1;Obama;Male");
    strcpy(*(dssv+1),"SV2;Yanjmaa;Female");
    strcpy(*(dssv+2),"SV3;Trump;Male");
    strcpy(*(dssv+3),"SV4;Putin;Male");
    strcpy(*(dssv+4),"SV5;Pereira;Female");

    int soNam=0, soNu=0;
    for(int i=0; i<5; i++)
    {
        cout<<*(dssv+i)<<endl;
        bool check=kiemTraNamNu(*(dssv+i));
        if(check)
        {
            soNu++;
        }
        else
        {
            soNam++;
        }
    }
    cout<<"\nCo so nam la: "<<soNam<<endl;
    cout<<"Co so nu la: "<<soNu<<endl;
    return 0;
}
