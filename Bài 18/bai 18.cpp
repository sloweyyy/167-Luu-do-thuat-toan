#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x12 = phepnhan(x);
	cout << "x12 = " << x12;
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
	int x6 = x4 * x2;
	return  x6 * x6;
}