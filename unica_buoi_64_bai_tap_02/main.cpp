#include <iostream>

using namespace std;
int tinhTongChuSo(int);

int main()
{
    int n;
    do
    {
        cout<<"Nhap vao so nguyen duong n (n>0): ";
        cin>>n;
    }
    while(n<=0);
    int sum = tinhTongChuSo(n);
    if(sum%3==0)
    {
        cout<<n<<" la mot so chia het cho 3"<<endl;
    }
    else
    {
        cout<<n<<" khong chia het cho 3"<<endl;
    }
    return 0;
}
int tinhTongChuSo(int n)
{
    int sum = 0;
    int temp = n;
    while(temp!=0)
    {
        temp = temp % 10;
        sum = sum + temp;
        temp = temp / 10;
    }
    return sum;
}
