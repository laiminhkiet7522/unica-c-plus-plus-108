#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char *str=new char[255];
    cout<<"Nhap chuoi: ";
    cin.getline(str,255);
    int n=strlen(str);
    for(int i=0; i<n; i++)
    {
        char c=*(str+i);
        int ascii=(int)c;
        cout<<c<<"=>"<<ascii<<endl;
    }
    return 0;
}
