#include <iostream>
#include <string.h>
using namespace std;

void tachChuoiTrai(char *chuoiGoc, char *&chuoiTrai, char *&chuoiPhai);
void tachChuoiPhai(char *chuoiBanDau, char *&chuoiDau, char *&chuoiSau);

int main()
{
    char *chuoiGoc = new char[255];
    strcpy(chuoiGoc, "Lai Minh Kiet");
    char *chuoiTrai = new char[255];
    char *chuoiPhai = new char[255];
    strcpy(chuoiTrai, "");
    strcpy(chuoiPhai, "");
    tachChuoiTrai(chuoiGoc, chuoiTrai, chuoiPhai);
    cout << chuoiTrai << endl;
    cout << chuoiPhai << endl;

    cout << "\n--------------------\n\n";

    char *chuoiBanDau = new char[255];
    strcpy(chuoiBanDau, "Lai Minh Kiet");
    char *chuoiDau = new char[255];
    char *chuoiSau = new char[255];
    strcpy(chuoiDau, "");
    strcpy(chuoiSau, "");
    tachChuoiPhai(chuoiBanDau, chuoiDau, chuoiSau);
    cout << chuoiSau << endl;
    cout << chuoiDau << endl;

    delete[] chuoiGoc;
    delete[] chuoiTrai;
    delete[] chuoiPhai;
    delete[] chuoiBanDau;
    delete[] chuoiDau;
    delete[] chuoiSau;

    return 0;
}

void tachChuoiTrai(char *chuoiGoc, char *&chuoiTrai, char *&chuoiPhai)
{
    char *p = strchr(chuoiGoc, ' ');
    int lengthSpace = p - chuoiGoc;
    strncpy(chuoiTrai, chuoiGoc, lengthSpace);
    chuoiTrai[lengthSpace] = '\0';
    p = p + 1;
    chuoiPhai = p;
}

void tachChuoiPhai(char *chuoiBanDau, char *&chuoiDau, char *&chuoiSau)
{
    int j = 0;
    for (int i = strlen(chuoiBanDau) - 1; i >= 0; i--)
    {
        if (chuoiBanDau[i] == ' ')
        {
            j = i + 1;
            break;
        }
    }

    int i2 = 0;
    for (int i = j; i < strlen(chuoiBanDau); i++)
    {
        chuoiSau[i2] = chuoiBanDau[i];
        i2++;
    }
    chuoiSau[i2] = '\0';
    strncpy(chuoiDau, chuoiBanDau, j - 1);
    chuoiDau[j - 1] = '\0';
}
