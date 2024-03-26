#include <iostream>

using namespace std;

int main()
{
    cout << "Giai va bien luan phuong trinh bac 1: ax + b = 0" << endl;
    float a,b;
    cout<<"Nhap he so a: ";
    cin>>a;
    cout<<"Nhap he so b: ";
    cin>>b;
    if(a==0 && b==0)
    {
        cout<<"Phuong trinh vo so nghiem";
    }
    else if(a==0 && b!=0)
    {
        cout<<"Phuong trinh vo nghiem";
    }
    else
    {
        float result = -b/a;
        cout<<"Phuong trinh co nghiem x = "<<result<<endl;
    }
    return 0;
}
