#include<iostream>
#include<cmath>
using namespace std;
float xuly(float&);
int main()
{
	float x;
	cin >> x;
	cout << xuly(x);
	return 0;
}
float xuly(float& x)
{
	if (x <= 1)
	{
		if (x < 0)
		{
			float kq = -2 * pow(x, 3) + 6 * x + 9;
			return kq;
		}
		else
		{
			float kq = 5 * x - 7;
			return kq;
		}
	}
	else
	{
		float kq = 2 * pow(x, 3) + 5 * x * x - 8 * x + 3;
		return kq;
	}
}