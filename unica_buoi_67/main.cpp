#include <iostream>

using namespace std;

int main()
{
    int a=20, b=15;
    int *pa, *pb, temp;
    pa=&a;
    pb=&b;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    pa=pb;
    *pb=50;
    cout<<"\n\na="<<*pa<<endl;
    cout<<"b="<<*pb<<endl;

    cout<<"\n\nDia chi cua con tro pa = "<<pa<<endl;
    pa++;
    cout<<"\n\nDia chi cua con tro pa sau khi cong = "<<pa<<endl;
    return 0;
}
