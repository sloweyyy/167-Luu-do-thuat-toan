#include <iostream>
#include <cmath>
using namespace std;
void xuly(float&, float&, float&);
int main()
{
    float a, b, c;
    cout << "Nhap a,b,c ";
    cin >> a >> b >> c;
    xuly(a, b, c);
    return 0;
}
void xuly(float& a, float& b, float& c)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    cout << a << " " << b << " " << c;
}