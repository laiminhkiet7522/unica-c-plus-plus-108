#include <iostream>

using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
PhanSo *Cong(PhanSo ps1, PhanSo ps2);
PhanSo *Tru(PhanSo ps1, PhanSo ps2);
PhanSo *Nhan(PhanSo ps1, PhanSo ps2);
PhanSo *Chia(PhanSo ps1, PhanSo ps2);
int UocChungLonNhat(PhanSo ps);
PhanSo *ToiGian(PhanSo ps);
int main()
{
    PhanSo ps1;
    ps1.tu=1;
    ps1.mau=2;

    PhanSo ps2;
    ps2.tu=3;
    ps2.mau=4;

    PhanSo *ps3=Cong(ps1,ps2);
    cout<<"Cong hai phan so = ";
    cout<<ps3->tu<<"/"<<ps3->mau<<endl;

    PhanSo *ps=ToiGian(*ps3);
    cout<<"Phan so toi gian = "<<ps->tu<<"/"<<ps->mau<<endl;

    /*
    PhanSo *ps4=Tru(ps1,ps2);
    cout<<"Tru hai phan so = ";
    cout<<ps4->tu<<"/"<<ps4->mau<<endl;

    PhanSo *ps5=Nhan(ps1,ps2);
    cout<<"Nhan hai phan so = ";
    cout<<ps5->tu<<"/"<<ps5->mau<<endl;

    PhanSo *ps6=Chia(ps1,ps2);
    cout<<"Chia hai phan so = ";
    cout<<ps6->tu<<"/"<<ps6->mau<<endl;
    */
    return 0;
}
PhanSo *Cong(PhanSo ps1, PhanSo ps2)
{
    /* a/b + c/d = (a*d+b*c)/(b*d) */
    PhanSo *ps3=new PhanSo;
    ps3->tu=ps1.tu*ps2.mau + ps1.mau*ps2.tu;
    ps3->mau=ps1.mau*ps2.mau;
    return ps3;
}
PhanSo *Tru(PhanSo ps1, PhanSo ps2)
{
    /* a/b - c/d = (a*d-b*c)/(b*d) */
    PhanSo *ps3=new PhanSo;
    ps3->tu=ps1.tu*ps2.mau - ps1.mau*ps2.tu;
    ps3->mau=ps1.mau*ps2.mau;
    return ps3;
}
PhanSo *Nhan(PhanSo ps1, PhanSo ps2)
{
    /* a/b * c/d = (a*c)/(b*d) */
    PhanSo *ps3=new PhanSo;
    ps3->tu=ps1.tu*ps2.tu;
    ps3->mau=ps1.mau*ps2.mau;
    return ps3;
}
PhanSo *Chia(PhanSo ps1, PhanSo ps2)
{
    /* a/b / c/d = (a*d)/(b*c) */
    PhanSo *ps3=new PhanSo;
    ps3->tu=ps1.tu*ps2.mau;
    ps3->mau=ps1.mau*ps2.tu;
    return ps3;
}
int UocChungLonNhat(PhanSo ps)
{
    int soNho=ps.tu<ps.mau?ps.tu:ps.mau;
    for(int i=soNho; i>=1; i--)
    {
        if(ps.tu%i==0 && ps.mau%i==0)
        {
            return i;
        }
    }
    return 1;
}
PhanSo *ToiGian(PhanSo ps)
{
    int uoc=UocChungLonNhat(ps);
    PhanSo *psToiGian=new PhanSo;
    psToiGian->tu=ps.tu/uoc;
    psToiGian->mau=ps.mau/uoc;
    return psToiGian;
}
