#include <iostream>

using namespace std;

int main()
{
    int count=100;
    int *m=&count;
    cout<<"Dia chi cua bien count = "<<&count<<endl;
    cout<<"Gia tri cua bien count = "<<count<<endl;
    cout<<"Dia chi cua con tro m = "<<m<<endl;
    cout<<"Gia tri cua con tro m dang tro toi = "<<*m<<endl;

    int p=*m;
    cout<<"\nGia tri cua p = "<<p<<endl;
    cout<<"Dia chi cua p = "<<&p<<endl;

    int *x=m;
    cout<<"\nDia chi cua con tro x = "<<x<<endl;
    cout<<"Gia tri cua con tro x dang tro toi = "<<*x<<endl;

    //Neu x thay doi hoac m thay doi
    //=> keo theo ca hai gia tri tai x,m deu thay doi
    //=> count cung doi theo
    *x=17;
    cout<<"\nGia tri cua con tro m dang tro toi = "<<*m<<endl;
    cout<<"Gia tri cua con tro x dang tro toi = "<<*x<<endl;

    *m=99;
    cout<<"\nGia tri cua con tro x dang tro toi = "<<*x<<endl;
    cout<<"Gia tri cua con tro m dang tro toi = "<<*m<<endl;

    cout<<"\nCount = "<<count<<endl;
    return 0;
}
