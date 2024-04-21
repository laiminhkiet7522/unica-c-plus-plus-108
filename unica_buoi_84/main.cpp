#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[]="lai minh kiet";
    for(int i=0; i<strlen(str1); i++)
    {
        char c1=str1[i];
        putchar(toupper(c1));
    }
    cout<<endl;

    char str2[]="LAI MINH KIET";
    for(int i=0; i<strlen(str2); i++)
    {
        char c2=str2[i];
        putchar(tolower(c2));
    }
    return 0;
}
