#include<iostream>
#include<cmath>
using namespace std;
float tinhCos(int&);
int main()
{
    int x;
    cin >> x;
    cout << tinhCos(x);
    return 0;
}
float tinhCos(int& x)
{
    int dau = -1, t = 1, m = 1, i = 2;
    float e = 1, s = 1;
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