#include <iostream>

using namespace std;

int main()
{
    int *p;//khai bao mot con tro p
    p=new int;//cap phat bo nho cho con tro p
    *p=100;//gan gai tri =100 tai o nho ma p dang tro toi
    cout<<"Dia chi tai con tro p: "<<p<<endl;
    cout<<"Gia tri tai dia chi ma con tro p tro toi = "<<*p<<endl;
    delete p;//Bi loi Memory Leak neu khong thu hoi bo nho
    return 0;
}
