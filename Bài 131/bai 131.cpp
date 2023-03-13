#include <iostream>
#include <cmath>
using namespace std;
void xuly(float&, float&, float&, float&, float&, float&);
int main()
{
    float x1, y1, x2, y2, x3, y3;
    cout << "Nhap x1 y1 x2 y2 x3 y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    xuly(x1, y1, x2, y2, x3, y3);
    return 0;
}
void xuly(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
    float a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    float c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (a + b > c || a + c > b || b + c > a)
        cout << "la tam giac";
    else
        cout << "khong la tam giac";
}