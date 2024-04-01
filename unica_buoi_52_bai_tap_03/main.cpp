#include <iostream>

using namespace std;

void nhapMaTran(int maTran[][2], int rows, int cols)
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
void xuatMaTran(int maTran[][2], int rows, int cols)
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
void tinhTichMaTran(int maTranA[][2], int maTranB[][2], int maTranC[][2], int rowsA, int colsA, int colsB)
{
    for(int i=0; i<rowsA; i++)
    {
        for(int j=0; j<colsB; j++)
        {
            maTranC[i][j] = 0;
            for (int k=0; k < colsA; k++)
            {
                maTranC[i][j] += maTranA[i][k] * maTranB[k][j];
            }
        }
    }
}
int main()
{
    const int rowsA = 2;
    const int colsA = 2;
    const int rowsB = 2;
    const int colsB = 2;

    int maTranA[rowsA][colsA];
    int maTranB[rowsB][colsB];
    int maTranC[rowsA][colsB];
    cout<<"Nhap cac phan tu cua ma tran A\n";
    nhapMaTran(maTranA,rowsA,colsA);
    cout<<"Nhap cac phan tu cua ma tran B\n";
    nhapMaTran(maTranB,rowsB,colsB);
    cout<<"Ma tran A, ban vua nhap la\n";
    xuatMaTran(maTranA,rowsA,colsA);
    cout<<"Ma tran B, ban vua nhap la\n";
    xuatMaTran(maTranB,rowsB,colsB);
    tinhTichMaTran(maTranA,maTranB,maTranC,rowsA,colsA,colsB);
    cout<<"Tich hai ma tran A,B la\n";
    xuatMaTran(maTranC,rowsA,colsB);
    return 0;
}
