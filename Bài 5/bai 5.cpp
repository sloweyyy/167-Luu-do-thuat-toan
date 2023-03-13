#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&);
float Thetich(float);
int main()
{
	float r;
	Nhap(r);
	float tt = Thetich(r);
	cout << "The tich la xung quanh: " << tt;
	return 0;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Thetich(float r)
{
	return  4/3 * M_PI * r * r;
}