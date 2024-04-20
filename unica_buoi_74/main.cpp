#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapMaTran(int **&M, int n);
void xuatMaTran(int **M, int n);
int findMax(int **M, int n);
int main()
{
    int **M;
    int n=5;
    nhapMaTran(M,n);
    cout<<"Ma tran ngau nhien vua duoc tao la:\n";
    xuatMaTran(M,n);
    int soLonNhat = findMax(M,n);
    cout<<"\nSo lon nhat trong ma tran la: "<<soLonNhat<<endl;
    return 0;
}
void nhapMaTran(int **&M, int n)
{
    srand(time(NULL));
    M=new int*[n];//Cap phat o nho cho tron co cap 2
    for(int i=0; i<n; i++)
    {
        *(M+i)=new int[n];//Cap phat tung o nho cho tung con tro trong mang con tro
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            *(*(M+i)+j)=rand()%151-50;
        }
    }
}
void xuatMaTran(int **M, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<*(*(M+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int findMax(int **M, int n)
{
    int m = *(*(M+0)+0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(m<*(*(M+i)+j))
            {
                m=*(*(M+i)+j);
            }
        }
    }
    return m;
}
