#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    cout << "CHUONG TRINH CHOI GAME DOAN SO!" << endl;
    srand(time(NULL));
    int soMay = 1+ rand()%100;
    cout<<"May da doan so trong doan [1-100], moi ban doan so!"<<endl;
    cout<<soMay<<endl;
    int soNguoi;
    int soLanDoan = 0;
    bool check = false;
    while(true)
    {
        do
        {
            soLanDoan++;
            cout<<"Moi ban nhap so: ";
            cin>>soNguoi;
            cout<<"Lan doan thu "<<soLanDoan<<endl;
            if(soNguoi == soMay)
            {
                cout<<"Ha ha ban tai that, so may = "<<soMay<<endl;
                check = true;
                break;
            }
            else if(soNguoi>soMay)
            {
                cout<<"Ban doan sai roi, so nguoi lon hon so may"<<endl;
            }
            else
            {
                cout<<"Ban doan sai roi, so nguoi nho hon so may"<<endl;
            }
        }
        while(soLanDoan<7);
        if(check != false && soLanDoan <= 7)
        {
            cout<<"Tro choi ket thuc! Ban da chien thang"<<endl;
            cout<<"So may = "<<soMay<<endl;
        }
        else
        {
            cout<<"Tro choi ket thuc! Ban da thua cuoc"<<endl;
            cout<<"So may = "<<soMay<<endl;
        }
        cout<<"Ban co muon tiep tuc khong (y/n):";
        char c;
        cin>>c;
        if(c=='n')
        {
            break;
        }
        else
        {
            soLanDoan=0;
            check = false;
        }
    }
    return 0;
}
