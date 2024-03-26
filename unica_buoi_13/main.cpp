#include <iostream>

using namespace std;

int main()
{
    cout << "Dien tich tam giac bang 1 phan 2 tich cua chieu cao ha tu dinh voi do dai canh doi dien cua dinh do" << endl;
    float chieuCao, doDaiCanhDay, dienTich;
    cout<<"Vui long nhap chieu cao tam giac: ";
    cin>>chieuCao;
    cout<<"Vui long nhap do dai canh day tam giac: ";
    cin>>doDaiCanhDay;
    dienTich = (1.0*chieuCao*doDaiCanhDay)/2;
    cout<<"Dien tich tam giac = "<<dienTich<<endl;
    return 0;
}
