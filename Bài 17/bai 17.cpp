#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x11 = phepnhan(x);
	cout << "x11 = " << x11;
	return 0;
}
void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float phepnhan(float x)
{
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x3 = x * x2;
	return   x8 * x3;
}