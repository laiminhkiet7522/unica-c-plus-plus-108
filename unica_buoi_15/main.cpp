#include <iostream>

using namespace std;

int main()
{
    cout << "Tinh gio:phut:giay" << endl;
    int second_in;
    int hour,minute,second;
    cout<<"Nhap vao mot so giay:";
    cin>>second_in;
    hour = (second_in/3600)%24;
    minute = (second_in%3600)/60;
    second = (second_in%3600)%60;
    int hourTemp = (hour>12)?hour-12:hour;
    cout<<hourTemp<<":"<<minute<<":"<<second<<(hour>12?" PM":" AM");
    return 0;
}
