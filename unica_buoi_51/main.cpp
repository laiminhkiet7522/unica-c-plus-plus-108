#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout<<"Nhap vao so phan tu mang: ";
    cin>>n;
    int M[n];
    for(int i=0; i<n; i++)
    {
        M[i] = rand()%100;
    }
    cout<<"Mang mot chieu ngau nhien la:\n";
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
    int demLe=0;
    cout<<"\n\nCac so le co trong mang la: ";
    for(int i=0; i<n; i++)
    {
        if(M[i]%2!=0)
        {
            cout<<M[i]<<"\t";
            demLe++;
        }
    }
    cout<<"==> Co tong cong "<<demLe<<" so le trong mang";

    int demChan=0;
    cout<<"\n\nCac so chan co trong mang la: ";
    for(int i=0; i<n; i++)
    {
        if(M[i]%2==0)
        {
            cout<<M[i]<<"\t";
            demChan++;
        }
    }
    cout<<"==> Co tong cong "<<demChan<<" so chan trong mang";

    cout<<"\n\nCac so nguyen to trong mang la: ";
    for(int i=0; i<n; i++)
    {
        bool check = true;
        if(M[i]<2)
        {
            check = false;
        }
        for(int j=2; j*j<=M[i]; j++)
        {
            if(M[i]%j==0)
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            cout<<M[i]<<"\t";
        }
    }
    return 0;
}
