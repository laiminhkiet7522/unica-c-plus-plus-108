#include <iostream>

using namespace std;
int tinhGiaiThua (int n);
void chuyenTuThapSangNhi(int n);
int main()
{
    //5!=1.2.3.4.5=120
    int giaiThua = tinhGiaiThua(5);
    cout<<"5!="<<giaiThua<<endl;
    cout<<"Chuyen doi tu thap phan sang nhi phan\n";
    chuyenTuThapSangNhi(11);
    return 0;
}
int tinhGiaiThua(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*tinhGiaiThua(n-1);
}
void chuyenTuThapSangNhi(int n)
{
    if(n>0)
    {
        int t = n%2;
        chuyenTuThapSangNhi(n/2);
        cout<<t<<" ";
    }
}
