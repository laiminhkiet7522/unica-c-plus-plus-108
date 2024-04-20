#include <iostream>

using namespace std;

int main()
{
    char *str="Hello";
    cout<<str<<endl;

    char str2[]="World\0";
    cout<<str2<<endl;

    char str3[]= {'K','I','E','T','\0'};
    cout<<str3<<endl;

    char str4[10];
    /*str4="Putin"; //Error */
    str4[0]='P';
    str4[1]='u';
    str4[2]='t';
    str4[3]='i';
    str4[4]='n';
    cout<<str4<<endl;
    return 0;
}
