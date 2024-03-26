#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    double M[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap gia tri cho phan tu thu "<<i<<": ";
        cin>>M[i];
    }
    cout<<"Mang sau khi nhap la:\n";
    int i=0;
    do
    {
        cout<<M[i]<<"\t";
        i++;
    }while(i<n);
    i=0;
    int j=0;
    do
    {
        j=i+1;
        do
        {
            if(M[i]<M[j])
            {
                double temp = M[i];
                M[i] = M[j];
                M[j] = temp;
            }
            j++;
        }while(j<n);
        i++;
    }
    while(i<n-1);
    cout<<"\nMang sau khi sap xep giam dan la: \n";
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
    return 0;
}
