#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void choiGame();
void vongLapChoiGame();
int main()
{
    srand(time(NULL));
    vongLapChoiGame();
    return 0;
}

void choiGame()
{
    int soMay = rand()%100 + 1;
    int soLanDoan=0;
    int soNguoi;
    do
    {
        cout<<"May da doan [1->100], moi ban doan: ";
        cin>>soNguoi;
        soLanDoan++;
        cout<<"Lan doan thu "<<soLanDoan<<endl;
        if(soNguoi==soMay)
        {
            cout<<"Ban da doan dung, so may = "<<soMay<<endl;
            break;
        }
        if(soNguoi>soMay)
        {
            cout<<"So may dang < so ban doan"<<endl;
        }
        else
        {
            cout<<"So may dang > so ban doan"<<endl;
        }
        if(soLanDoan==7)
        {
            cout<<"Ban da thua cuoc, so may = "<<soMay<<endl;
            break;
        }
    }
    while(true);
}
void vongLapChoiGame()
{
    while(true)
    {
        choiGame();
        char c;
        cout<<"Ban co muon tiep tuc choi khong (y/n)?: ";
        cin>>c;
        if(c=='n')
        {
            cout<<"Tro choi ket thuc!"<<endl;
            break;
        }
    }
}
