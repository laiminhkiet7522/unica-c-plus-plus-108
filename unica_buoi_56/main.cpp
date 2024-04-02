#include <iostream>

using namespace std;

void ham1(int x);
void ham2 (int &x);
int main()
{
    int x=5;
    cout<<"x truoc khi vao ham 1 = "<<x;
    ham1(x);
    cout<<"x sau khi vao ham 1 = "<<x<<endl;

    x=5;
    cout<<"\nx truoc khi vao ham 2 = "<<x;
    ham2(x);
    cout<<"x sau khi vao ham 2 = "<<x;
    return 0;
}
void ham1(int x)
{
    x=10;
    cout<<"\nx trong ham 1 = "<<x<<endl;
}
void ham2(int &x)
{
    x=10;
    cout<<"\nx trong ham 2 = "<<x<<endl;
}
