#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int row,col;
    cout<<"Nhap so dong: ";
    cin>>row;
    cout<<"Nhap so cot: ";
    cin>>col;
    int M[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            M[i][j] = rand()%100;
        }
    }
    cout<<"Mang vua nhap ngau nhien la: \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
    int soDong;
    cout<<"Ban muon xuat dong nao: ";
    cin>>soDong;
    for(int j=0; j<col; j++)
    {
        cout<<M[soDong][j]<<"\t";
    }
    int soCot;
    cout<<"\nBan muon xuat cot nao: ";
    cin>>soCot;
    for(int i=0; i<row; i++)
    {
        cout<<M[i][soCot]<<endl;
    }
    if(row==col)
    {
        cout<<"Duong cheo chinh la: \n";
        for(int i=0; i<row; i++)
        {
            cout<<M[i][i]<<"\t";
        }
        cout<<"\nDuong cheo phu la: \n";
        for(int i=0; i<row; i++)
        {
            cout<<M[i][row-i-1]<<"\t";
        }
    }
    return 0;
}
