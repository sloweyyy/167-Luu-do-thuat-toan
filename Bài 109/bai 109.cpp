#include<iostream>
#include<cmath>
using namespace std;
float tinhPi(int&);
int main()
{
    int x;
    cin >> x;
    cout << tinhPi(x);
    return 0;
}
float tinhPi(int& x)
{
    int dau = 1, i = 1;
    float e = 1, s = 0;
    while (e >= pow(10, -6))
    {
        e = (float)4 / i;
        s = s + dau * e;
        dau = -dau;
        i = i + 2;
    }
    return s;
}