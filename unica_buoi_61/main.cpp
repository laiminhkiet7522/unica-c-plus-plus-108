#include <iostream>

using namespace std;
int fibonacci(int n);
void xuatDayFibonacci(int n);
int main()
{
    int n=10;
    cout<<fibonacci(n);
    cout<<"\nDay so Fibonacci chi tiet la:\n";
    xuatDayFibonacci(n);
    return 0;
}
int fibonacci(int n)
{
    if(n<=2)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
void xuatDayFibonacci(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<fibonacci(i)<<"\t";
    }
}
