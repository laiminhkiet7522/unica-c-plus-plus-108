#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Chuyen doi ma tran tu dong->cot va cot->dong" << endl;
    srand(time(NULL));
    int m,n;
    cout<<"Nhap so dong: ";
    cin>>m;
    cout<<"Nhap so cot: ";
    cin>>n;
    int M[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            M[i][j] = rand()%100;
        }
    }
    cout<<"Ma tran sau khi nhap ngau nhien la:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
    int MT[n][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            MT[j][i] = M[i][j];
        }
    }
    cout<<"Ma tran hoan vi dong, cot la:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<MT[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
