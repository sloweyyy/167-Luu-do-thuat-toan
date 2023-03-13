#include<iostream>
#include<cmath>
using namespace std;
float tinhSin(int&);
int main()
{
    int x;
    cin >> x;
    cout << tinhSin(x);
    return 0;
}
float tinhSin(int& x)
{
    int dau = -1, t = x, m = 1, i = 3;
    float e = x, s = x;
    while (e >= pow(10, -6))
    {
        t = t * x * x;
        m = m * (i - 1) * i;
        e = (float)t / m;
        s = s + dau * e;
        dau = -dau;
        i = i + 2;
    }
    return s;
}