#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&);
float Dientich(float);
void Xuat(float);
int main()
{
	float r;
	Nhap(r);
	float dt = Dientich(r);
	Xuat(dt);
	return 0;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Dientich(float r)
{
	return  M_PI * r * r;
}
void Xuat(float kq)
{
	cout << "Dien tich la " << kq;
}