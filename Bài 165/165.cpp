#include<iostream>
#include<cmath>
using namespace std;

int XuLy(int n)
{
    int k = 0;
    while (pow(2, k) < n + 1)
    {
        k++;
    }
    return k - 1;
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int res = XuLy(n);
    cout << res;

    return 19;
}