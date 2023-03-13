#include <iostream>
using namespace std;
void Nhap(float&);
float phepnhan(float);
int main()
{
	float x;
	Nhap(x);
	float x9 = phepnhan(x);
	cout << "x9 = " << x9;
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
	int x6 = x3 * x3;
	return  x6 * x3;
}