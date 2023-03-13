#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&);
float chuvi(float);
int main()
{
	float r;
	Nhap(r);
	float cv = chuvi(r);
	cout << "Chu vi la: " << cv;
	return 0;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float chuvi(float r)
{
	return  M_PI * 2 * r;
}