#include <iostream>
using namespace std;
void Nhap(float&);
float doc(float);
int main()
{
	float f;
	Nhap(f);
	float dof = doc(f);
	cout << f << " do f bang " << dof << " do c";
	return 0;
}
void Nhap(float& f)
{
	cout << "Nhap f: ";
	cin >> f;
}
float doc(float f)
{
	return  1.8 * (f - 32);
}