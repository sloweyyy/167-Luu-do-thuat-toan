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
	if (x >= 5)
		return 2 * pow(x, 2) + 5 * x + 9;
	else
		return -2 * pow(x, 2) + 4 * x - 9;
}