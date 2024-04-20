#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapMang(int *&a, int n);
void xuatMang(int *a, int n);
void hoanDoiHaiSo(int *&a, int *&b);
void sapXepGiamDan(int *&a, int n);

int main()
{
    int *a;
    int n=10;
    nhapMang(a,n);
    cout<<"Mang sau khi nhap la:\n";
    xuatMang(a,n);
    sapXepGiamDan(a,n);
    cout<<"\nMang sau khi sap xep giam dan la:\n";
    xuatMang(a,n);
    return 0;
}
void nhapMang(int *&a, int n)
{
    srand(time(NULL));
    a=new int[n];
    for(int i=0; i<n; i++)
    {
        *(a+i)=rand()%101;
    }
}
void xuatMang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a+i)<<"\t";
    }
}
void hoanDoiHaiSo(int *&a, int *&b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sapXepGiamDan(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)<*(a+j))
            {
                int *a1=(a+i);
                int *a2=(a+j);
                hoanDoiHaiSo(a1,a2);
            }
        }
    }
}
