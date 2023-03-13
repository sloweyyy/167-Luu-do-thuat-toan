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
    float min = a;
    if (b < min)
        min = b;
    cout << "Min: " << min;
}