#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Bai 1. Chuong trinh nhap vao 1 ki tu va in ra ma ASCII cua no" << endl;
    char kyTu;
    cout<<"Nhap vao ky tu: ";
    cin>>kyTu;
    cout<<kyTu<<" co ma ASCII la: "<<int(kyTu)<<endl;
    cout<<"Ky tu ke tiep cua "<<kyTu<<" la: "<<char(kyTu+1)<<endl<<endl;

    cout << "Bai 2. Nhap vao so nguyen n va so thuc x. Tinh A=(x^2 + x + 1)^n + (x^2 - x + 1)^n" << endl;
    int number;
    double soX, result;
    cout<<"Nhap vao n: ";
    cin>>number;
    cout<<"Nhap vao x: ";
    cin>>soX;
    result = pow(pow(soX,2) + soX + 1,number) + pow(pow(soX,2) - soX +1,number);
    cout<<"A = "<<result<<endl<<endl;

    cout << "Bai 3. Nhap toa do hai diem A va B, tinh do dai doan AB" << endl;
    int x1, y1, x2, y2;
    double distance;
    cout<<"Nhap toa do diem A"<<endl;
    cout<<"Nhap x1: ";
    cin>>x1;
    cout<<"Nhap y1: ";
    cin>>y1;
    cout<<"Nhap toa do diem B"<<endl;
    cout<<"Nhap x2: ";
    cin>>x2;
    cout<<"Nhap y2: ";
    cin>>y2;
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"Do dai hai doan AB = "<<setprecision(2)<<distance<<endl<<endl;

    cout << "Bai 4. Viet chuong trinh dao nguoc so nguyen duong co dung 3 chu so" << endl;
    int soNguyenDuong;
    cout<<"Nhap so nguyen duong co 3 chu so: ";
    cin>>soNguyenDuong;
    if(soNguyenDuong<100 || soNguyenDuong>999)
    {
        cout<<"So ban nhap khong hop le! Chuong trinh ket thuc";
        return 1;
    }
    int reverse_number = 0;
    int temp = soNguyenDuong;
    while(temp!=0)
    {
        reverse_number = reverse_number * 10+ temp % 10;
        temp /= 10;
    }
    cout<<"So nguyen duong dao nguoc cua "<<soNguyenDuong<<" la: "<<reverse_number<<endl;
    return 0;
}
