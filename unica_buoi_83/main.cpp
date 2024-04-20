#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[25];
    char str2[25];
    strcpy(str1,"Xin chao ten toi la Kiet");
    strcpy(str2, "Xin chao ten toi la Lai Minh Kiet");
    int compare = strcmp(str1,str2);
    if(compare==0)
    {
        cout<<"Chuoi str1 = str2"<<endl;
    }
    else if(compare>0)
    {
        cout<<"Chuoi str1 > str2"<<endl;
    }
    else
    {
        cout<<"Chuoi str1 < str2"<<endl;
    }

    char str3[25];
    char str4[25];
    strcpy(str3,"Toi ten Kiet");
    strcpy(str4,"Toi ten Lai Minh Kiet");
    int compare2=strncmp(str3, str4, 3);
    if(compare2==0)
    {
        cout<<"Chuoi str3 = str4"<<endl;
    }
    else if(compare2>0)
    {
        cout<<"Chuoi str3 > str4"<<endl;
    }
    else
    {
        cout<<"Chuoi str3 < str4"<<endl;
    }
    return 0;
}
