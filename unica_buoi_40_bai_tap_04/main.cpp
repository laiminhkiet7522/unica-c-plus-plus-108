#include <iostream>
#include <math.h>

using namespace std;

// Hàm tính tổng của n căn lồng nhau
double tongCanLongNhau(int n)
{
    double sum = 0;
    for(int i=n; i>=1; i--)
    {
        sum = sqrt(i+sum);
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S = "<< tongCanLongNhau(n) << endl;

    return 0;
}
