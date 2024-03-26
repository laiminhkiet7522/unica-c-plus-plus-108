#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 1;
    cout<<"Nhap n: ";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==n)
    {
        cout<<n<<" la so hoan thien";
    }
    else
    {
        cout<<n<<" khong la so hoan thien";
    }
    return 0;
}
