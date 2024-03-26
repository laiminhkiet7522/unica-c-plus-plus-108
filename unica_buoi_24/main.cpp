#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Giai phuong trinh bac 2: ax^2 + bx + c = 0" << endl;
    float a,b,c;
    float result;
    cout<<"Nhap he so a: ";
    cin>>a;
    cout<<"Nhap he so b: ";
    cin>>b;
    cout<<"Nhap he so c: ";
    cin>>c;
    if(a==0)
    {
        if(b==0&&c==0)
        {
            cout<<"Phuong trinh vo so nghiem"<<endl;
        }
        else if(b==0 && c!=0)
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else
        {
            result = -b/c;
            cout<<"Phuong trinh co 1 nghiem x = "<<result<<endl;
        }
    }
    else
    {
        float delta = pow(b,2) - 4*a*c;
        if(delta<0)
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else if(delta == 0)
        {
            float nghiemKep = -b/(2*a);
            cout<<"Phuong trinh co nghiem kep, x1=x2="<<nghiemKep<<endl;
        }
        else
        {
            float x1 = (-b-sqrt(delta))/(2*a);
            float x2 = (-b+sqrt(delta))/(2*a);
            cout<<"Phuong trinh co 2 nghiem phan biet"<<endl;
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }
    }
    return 0;
}
