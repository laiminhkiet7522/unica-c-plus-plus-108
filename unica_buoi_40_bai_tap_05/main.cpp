#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int reverse_num = 0;
    while(n!=0)
    {
        reverse_num = reverse_num * 10 + n%10;
        n/=10;
    }
    cout<<"So dao cua n la: "<<reverse_num<<endl;
    return 0;
}
