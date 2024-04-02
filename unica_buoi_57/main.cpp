#include <iostream>

using namespace std;
void tinhTong(int x, int y=1)
{
    cout<<(x+y)<<endl;
}
int main()
{
    tinhTong(1,2);
    tinhTong(10);
    return 0;
}
