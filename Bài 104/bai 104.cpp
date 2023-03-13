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
	while (e >= pow(10, -6))
	{
		e = (float)1 / (i * (i + 1));
		s += e;
		i++;
	}
	return s;
}