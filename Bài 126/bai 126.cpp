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
    float max = a;
    if (b > max)
        max = b;
    cout << "Max: " << max;
}