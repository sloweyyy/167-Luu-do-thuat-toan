#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x32 = phepnhan(x);
	cout << "x32 = " << x32;
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
	int x16 = x8 * x8;
	return  x16 * x16;
}