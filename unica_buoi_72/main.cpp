#include <iostream>

using namespace std;
void swap(double *&pa, double *&pb);
int main()
{
    double a = 5.5;
    double b = 6.5;
    cout<<"Gia tri a truoc khi doi la: "<<a;
    cout<<"\nGia tri b truoc khi doi la: "<<b;
    swap(a,b);
    cout<<"\n\nGia tri a sau khi doi la: "<<a;
    cout<<"\nGia tri b sau khi doi la: "<<b;
    return 0;
}
void swap(double *&pa, double *&pb)
{
    double temp = *pa;
    *pa=*pb;
    *pb=temp;
}
