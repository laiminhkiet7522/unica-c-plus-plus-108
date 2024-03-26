#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Tinh Sin, Cos, Tan, Cot" << endl;
    int x;
    double radian;
    const double PI = 3.14;
    cout<<"Nhap vao 1 goc: ";
    cin>>x;
    radian = x *PI/180;
    double sinX = sin(radian);
    double cosX = cos(radian);
    double tanX = tan(radian);
    double cotX = 1.0/tan(radian);
    cout<<"sin("<<x<<") = "<<sinX<<endl;
    cout<<"cos("<<x<<") = "<<cosX<<endl;
    cout<<"tan("<<x<<") = "<<tanX<<endl;
    cout<<"cot("<<x<<") = "<<cotX<<endl;
    return 0;
}
