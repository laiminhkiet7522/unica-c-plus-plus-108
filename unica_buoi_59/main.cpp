#include <iostream>
#include <math.h>
using namespace std;
void giaiPhuongTrinhBacHai(double a, double b, double c);
int main()
{
    giaiPhuongTrinhBacHai(0,25,-5);
    return 0;
}
void giaiPhuongTrinhBacHai(double a, double b, double c)
{
    if(a==0)
    {
        //bx+c=0
        if(b==0 && c==0)
        {
            cout<<"Phuong trinh co vo so nghiem"<<endl;
        }
        else if(b==0 && c!=0)
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else
        {
            double x=-c/b;
            cout<<"Phuong trinh co 1 nghiem: x="<<x<<endl;
        }
    }
    else
    {
        double delta = pow(b,2)-4*a*c;
        if(delta>0)
        {
            double x1=(-b-sqrt(delta))/(2*a);
            double x2=(-b+sqrt(delta))/(2*a);
            cout<<"Phuong trinh co 2 nghiem phan biet: x1="<<x1<<" va x2="<<x2<<endl;
        }
        else if(delta==0)
        {
            double nghiemKep=-b/(2*a);
            cout<<"Phuong trinh co nghiem kep: x1=x2="<<nghiemKep<<endl;
        }
        else
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
    }
}
