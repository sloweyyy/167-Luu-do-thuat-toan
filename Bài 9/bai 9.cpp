#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&, float&);
float Dientich(float, float);
int main()
{
	float r, n;
	Nhap(r, n);
	float dt = Dientich(r, n);
	cout << "Chu vi la: " << dt;
	return 0;
}
void Nhap(float& r, float& n)
{
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
}
float Dientich(float r, float n)
{
	return  (float) 1/2 * n * r * r* sin(2*M_PI / n);
}