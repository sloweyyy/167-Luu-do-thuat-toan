#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x7 = phepnhan(x);
	cout << "x7 = " << x7;
	return 0;
}
void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float phepnhan(float x)
{
	float x2 = x * x;
	float x3 = x * x2;
	float x5 = x2 * x3;
	return  x2 * x5;
}