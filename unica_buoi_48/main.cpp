#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Nhap vao mang co n phan tu: ";
    cin>>n;
    int M[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap M["<<i<<"]: ";
        cin>>M[i];
    }
    cout<<"Mang sau khi nhap la:\n";
    for(int i=0; i<n; i++)
    {
        cout<<M[i]<<"\t";
    }
    int max = M[0];
    for(int i=1; i<n; i++)
    {
        if(M[i]>max)
        {
            max = M[i];
        }
    }
    cout<<"\nPhan tu lon nhat trong mang la: "<<max<<endl;
    int min = M[0];
    for(int i=1; i<n; i++)
    {
        if(M[i] < min)
        {
            min = M[i];
        }
    }
    cout<<"Phan tu nho nhat trong mang la: "<<min<<endl;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=M[i];
    }
    cout<<"Tong cac phan tu trong mang = "<<sum<<endl;
    return 0;
}
