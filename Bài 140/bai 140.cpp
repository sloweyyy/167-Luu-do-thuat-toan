#include<iostream>
using namespace std;
void xuly(float&, float&, float&);
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	xuly(a, b, c);
	return 0;
}
void xuly(float& a, float& b, float& c)
{
	float d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
		{
			float x0 = -b / 2 * a;
			cout << "PT co nghiem kep: " << x0;
		}
		else
			cout << "PT vo nghiem";
	}
	else
	{
		float x1 = ((-b + sqrt(d)) / (2 * a));
		float x2 = ((-b - sqrt(d)) / (2 * a));
		cout << "PT co 2 nghiem phan biet x1 = " << x1 << "   x2 = " << x2;
	}
}