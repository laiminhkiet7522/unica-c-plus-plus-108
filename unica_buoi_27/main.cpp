#include <iostream>

using namespace std;

int main()
{
    cout << "Chuong trinh tinh cong, tru, nhan, chia hai so a va b thong qua nhap ky tu" << endl;
    int a,b;
    char kyTu;
    cout<<"Nhap so a: ";
    cin>>a;
    cout<<"Nhap so b: ";
    cin>>b;
    cout<<"Nhap ky tu ('+':Cong '-':Tru '*':Nhan '/':Chia) : ";
    cin>>kyTu;
    switch(kyTu)
    {
    case '+':
        cout<<"a + b = "<<a+b<<endl;
        break;
    case '-':
        cout<<"a - b = "<<a-b<<endl;
        break;
    case '*':
        cout<<"a * b = "<<a*b<<endl;
        break;
    case '/':
        cout<<"a / b = "<<a*1.0/b<<endl;
        break;
    default:
        cout<<"Ban da nhap khong hop le"<<endl;
    }
    return 0;
}
