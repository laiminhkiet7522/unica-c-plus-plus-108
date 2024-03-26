#include <iostream>

using namespace std;

int main()
{
    int number;
    do
    {
        cout << "Nhap mot so nguyen duong: ";
        cin>>number;
    }
    while(number<1);
    int temp = number;
    bool hasPrimeDigit = false;
    while(temp>0)
    {
        int digit = temp%10;
        bool isPrime = true;
        if(digit<2)
        {
            isPrime = false;
        }
        else
        {
            for(int i=2; i*i<=digit; i++)
            {
                if(digit%i==0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime)
        {
            cout<<digit<<" ";
            hasPrimeDigit = true;
        }
        temp /= 10;
    }
    if(!hasPrimeDigit)
    {
        cout<<"Khong co chu so nao la so nguyen to trong "<<number<<endl;
    }
    return 0;
}
