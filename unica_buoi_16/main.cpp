#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Tinh diem trung binh" << endl;
    double diemToan, diemLy, diemHoa;
    double mediumScore;
    cout<<"Nhap diem Toan: ";
    cin>>diemToan;
    cout<<"Nhap diem Ly: ";
    cin>>diemLy;
    cout<<"Nhap diem Hoa: ";
    cin>>diemHoa;
    mediumScore = (diemToan+diemLy+diemHoa)/3;
    cout<<"Diem trung binh = "<<setprecision(3)<<mediumScore;
    return 0;
}
