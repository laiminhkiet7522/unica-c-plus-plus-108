#include <iostream>

using namespace std;

int main()
{
    cout << "Chuong trinh tinh tien dien" << endl;
    int soKw;
    float tienDien;
    cout<<"Nhap so Kw dien: ";
    cin>>soKw;
    if(soKw<=100)
    {
        tienDien = soKw * 600;
    }
    else if(soKw<=150)
    {
        tienDien = 100*600 + (soKw-100)*700;
    }
    else if(soKw<=200)
    {
        tienDien = 100*100 + 50*700 + (soKw-150)*900;
    }
    else
    {
        tienDien = 100*100 + 50*700 + 50*900 + (soKw-200)*1100;
    }
    cout<<"Tien ban phai thanh toan = "<<tienDien<<endl;
    return 0;
}
