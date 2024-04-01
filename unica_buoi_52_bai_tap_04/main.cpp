#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Nhap vao so phan tu cua mang: ";
        cin>>n;
    }
    while(n<=0);
    int M[n];
    for(int i=0; i<n; i++)
    {
        do
        {
            cout<<"Nhap phan tu thu "<<i<<" la so nguyen duong: ";
            cin>>M[i];
        }
        while(M[i]<0);
    }
    cout<<"Mang ban vua nhap la: \n";
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }

    cout<<"\nCac so nguyen to co trong mang: \n";
    for(int i=0; i<n; i++)
    {
        bool check = true;
        if(M[i]<2) check = false;
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

    cout<<"\nMang sau khi sap xep theo cac so chan tang dan:\n";
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(M[i]>M[j])
            {
                int temp = M[i];
                M[i] = M[j];
                M[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(M[i]%2==0)
        {
            cout<<M[i]<<"\t";
        }
    }
    return 0;
}
