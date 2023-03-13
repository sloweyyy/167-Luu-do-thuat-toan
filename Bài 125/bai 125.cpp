#include <iostream>
#include <cmath>
using namespace std;
void xuly(float&, float&);
int main()
{
    float a, b;
    cout << "Nhap a,b ";
    cin >> a >> b;
    xuly(a, b);
    return 0;
}
void xuly(float& a, float& b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    cout << "a= " << a << ", " << "b= " << b;
}