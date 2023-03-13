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
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b;
}