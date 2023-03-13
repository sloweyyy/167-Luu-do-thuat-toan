#include<iostream>
using namespace std;
void xuly(float&, float&);
int main()
{
	float a, b;
	cin >> a >> b;
	xuly(a, b);
	return 0;
}
void xuly(float& a, float& b)
{
	if (a == 0)
	{
		if (b == 0)
			cout << "vo so nghiem";
		else
			cout << "vo nghiem";
	}
	else
	{
		float x = -b / a;
		cout << "phuong trinh co nghiem la: " << x;
	}
}