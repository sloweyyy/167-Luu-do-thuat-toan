#include <iostream>
#include <cmath>
using namespace std;
void xuly(float&, float&, float&);
int main()
{
    float x, y, z;
    cout << "Nhap x,y,z ";
    cin >> x >> y >> z;
    xuly(x, y, z);
    return 0;
}
void xuly(float& x, float& y, float& z)
{
    if ((x + y > z) && (y + z > x) && (x + z > y))
        cout << "La tam giac";
    else
        cout << "Khong la tam giac";
}