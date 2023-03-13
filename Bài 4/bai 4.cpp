#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&);
float Dientichxq(float);
int main()
{
	float r;
	Nhap(r);
	float dt = Dientichxq(r);
	cout << "Dien tich la xung quanh: " << dt;
	return 0;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Dientichxq(float r)
{
	return  4 * M_PI * r * r;
}