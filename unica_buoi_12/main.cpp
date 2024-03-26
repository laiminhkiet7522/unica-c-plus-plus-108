#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap ban kinh duong trong r. Tinh chu vi, dien tich duong tron tuong ung. (Trong do: cv=2*pi*r; dt=pi*r^2)" << endl;
    float r,cv,dt;
    const float PI = 3.14;
    cout<<"Vui long nhap vao ban kinh r: ";
    cin>>r;
    cv = 2*PI*r;
    dt = PI*r*r;
    cout<<"Dien tich hinh tron = "<<dt<<endl;
    cout<<"Chu vi hinh tron = "<<cv<<endl;
    return 0;
}
