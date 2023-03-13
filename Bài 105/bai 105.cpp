#include<iostream>
#include<cmath>
using namespace std;
float tinhS();
int main()
{
	cout << tinhS();
	return 0;
}
float tinhS()
{
	float s = 0;
	float e = 1;
	int i = 1;
	int m = 0;
	while (e >= pow(10, -6))
	{
		m += i;
		e = (float)1 / m;
		s += e;
		i++;
	}
	return s;
}