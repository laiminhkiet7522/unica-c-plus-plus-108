#include <iostream>

using namespace std;
int tinhTongCacUocSo(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n la mot so nguyen duong (n>0): ";
        cin>>n;
    }
    while(n<=0);
    int result = tinhTongCacUocSo(n);
    if(result == n)
    {
        cout<<n<<" la mot so hoan thien"<<endl;
    }
    else if(result > n)
    {
        cout<<n<<" la mot so thinh vuong"<<endl;
    }
    else
    {
        cout<<n<<" khong la mot so hoan thien va thinh vuong"<<endl;
    }
    return 0;
}
int tinhTongCacUocSo(int n)
{
    int sum = 0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
