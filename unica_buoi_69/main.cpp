#include <iostream>

using namespace std;

int main()
{
    int a[]= {1,2,3,4,5}; //khai bao mang a
    int *p=a;//khai bao con tro p tro toi mang a

    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<*(p+i)<<"\t";
    }
    cout<<endl;

    *(p+3)=100;
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
