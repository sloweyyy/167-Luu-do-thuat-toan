#include <iostream>
using namespace std;
void Nhap(float&);
float dof(float);
int main()
{
	float c;
	Nhap(c);
	float doc = dof(c);
	cout << c<<" do c bang " << doc<<" do f";
	return 0;
}
void Nhap(float& c)
{
	cout << "Nhap c: ";
	cin >> c;
}
float dof(float c)
{
	return  9 / 5 * c + 32;
}