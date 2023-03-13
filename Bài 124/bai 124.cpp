#include <iostream>
#include <cmath>
using namespace std;
void xuly(int&);
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    xuly(n);
    return 0;
}
void xuly(int& n)
{
    int i = 2;
    float at = 2, bt = 1, ahh, bhh;
    while (i <= n)
    {
        ahh = pow(at, 2) + 2 * pow(bt, 2);
        bhh = 2 * at * bt;
        i = i + 1;
        at = ahh;
        bt = bhh;
    }
    cout << "a" << n << " = " << at << endl;
    cout << "b" << n << " = " << bt;
}