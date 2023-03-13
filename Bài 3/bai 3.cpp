#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&);
float Chuvi(float);
int main()
{
	float r;
	Nhap(r);
	float cv = Chuvi(r);
	cout << "Chu vi la: " << cv;
	return 0;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Chuvi(float r)
{
	return  M_PI * 2 * r;
}