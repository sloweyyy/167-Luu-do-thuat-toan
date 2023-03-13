#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
void Nhap(float&, float&);
float Chuvi(float, float);
int main()
{
	float r,n;
	Nhap(r,n);
	float cv = Chuvi(r,n);
	cout << "Chu vi la: " << cv;
	return 0;
}
void Nhap(float& r, float& n )
{
	cout << "Nhap r: ";
	cin >> r;
	cout << "Nhap n: ";
	cin >> n;
}
float Chuvi(float r, float n)
{
	return  2*n*r*sin(M_PI/n);
}