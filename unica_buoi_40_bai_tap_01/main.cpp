#include <iostream>

using namespace std;

int main()
{
    int number;
    bool check = true;
    cout << "Nhap number: ";
    cin>>number;
    if(number<2)
    {
        check = false;
    }
    for(int i=2; i*i<=number; i++)
    {
        if(number%i==0)
        {
            check = false;
            break;
        }
    }
    if(check)
    {
        cout<<number<<" la so nguyen to"<<endl;
    }
    else
    {
        cout<<number<<" khong la so nguyen to"<<endl;
    }
    return 0;
}
