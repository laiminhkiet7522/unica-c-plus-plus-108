#include <iostream>

using namespace std;

int main()
{
    int a=5;
    float f=10.5;
    int *pa=&a;
    float *pf=&f;
    void *p;
    p=&a;
    (*(int*)p)=10;
    cout<<"a="<<a<<endl;
    p=&f;
    (*(float*)p)=20.5;
    cout<<"f="<<f<<endl;

    int *y;
    y=new int;
    cout<<"\nGia tri ma o nho ma y quan ly = "<<*y<<endl;
    return 0;
}
