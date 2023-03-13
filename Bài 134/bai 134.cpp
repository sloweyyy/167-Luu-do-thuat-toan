#include<iostream>
using namespace std;
void xuly(float&, float&, float&);
int main()
{
	float x, y, z;
	cout << "nhap 3 so x, y, z: ";
	cin >> x >> y >> z;
	xuly(x, y, z);
	return 0;
}
void xuly(float& x, float& y, float& z)
{
	if (x <= y && y <= z)
		cout << "BDT dung";
	else
	{
		cout << "BDT sai";
	}
}