#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapMaTran(int **&M, int n);
void xuatMaTran(int **M, int n);
int **congHaiMaTran(int **M1, int **M2, int n);
int main()
{
    srand(time(NULL));
    int **M1;
    int **M2;
    int n=3;

    nhapMaTran(M1,n);
    nhapMaTran(M2,n);

    cout<<"Ma tran 1 vua duoc tao ngau nhien la:\n";
    xuatMaTran(M1,n);

    cout<<"Ma tran 2 vua duoc tao ngau nhien la:\n";
    xuatMaTran(M2,n);

    int **M3=congHaiMaTran(M1,M2,n);
    cout<<"\nMa tran 1 cong Ma tran 2 la:\n";
    xuatMaTran(M3,n);

    return 0;
}
void nhapMaTran(int **&M, int n)
{
    M=new int*[n];
    for(int i=0; i<n; i++)
    {
        *(M+i)=new int[n];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            *(*(M+i)+j)=rand()%5+1;
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
int **congHaiMaTran(int **M1, int **M2, int n)
{
    int **M3=new int*[n];
    for(int i=0; i<n; i++)
    {
        *(M3+i)=new int[n];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            *(*(M3+i)+j)=*(*(M1+i)+j)+*(*(M2+i)+j);
        }
    }
    return M3;
}
