#include <iostream>

using namespace std;

void nhapMaTran(int maTran[][3], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"Nhap phan tu thu ["<<i<<"]["<<j<<"]: ";
            cin>>maTran[i][j];
        }
    }
}
void xuatMaTran(int maTran[][3], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<maTran[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void tinhTongMaTran(int maTranA[][3], int maTranB[][3], int maTranC[][3], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            maTranC[i][j] = maTranA[i][j] + maTranB[i][j];
        }
    }
}
int main()
{
    const int rows=3;
    const int cols=3;
    int maTranA[rows][cols];
    int maTranB[rows][cols];
    int maTranC[rows][cols];
    cout<<"Nhap cac phan tu cua ma tran A\n";
    nhapMaTran(maTranA,rows,cols);
    cout<<"Nhap cac phan tu cua ma tran B\n";
    nhapMaTran(maTranB,rows,cols);
    cout<<"Ma tran A, ban vua nhap la\n";
    xuatMaTran(maTranA,rows,cols);
    cout<<"Ma tran B, ban vua nhap la\n";
    xuatMaTran(maTranB,rows,cols);
    tinhTongMaTran(maTranA,maTranB,maTranC,rows,cols);
    cout<<"Tong hai ma tran A,B la\n";
    xuatMaTran(maTranC,rows,cols);
    return 0;
}
