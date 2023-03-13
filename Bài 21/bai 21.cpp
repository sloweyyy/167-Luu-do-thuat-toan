#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x15 = phepnhan(x);
	cout << "x15 = " << x15;
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
	int x3 = x * x2;
	int x5 = x3 * x2;
	int x10 = x5 * x5;
	return  x10 * x5;
}