#include <iostream>
#include <cmath>
using namespace std;
float xuly();
int main()
{
	float s = xuly();
	cout << "Pi" << " = " << s;
	return 0;
}
float xuly()
{
	float s = 4-2/4-1/5-1/6;
	float e = s;
	int t = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t=t*16;
		e =(float) (4/(8*i+1)-2/(8*i+4)-1/(8*i+5)-1/(8*i+6))/t;
		s = s + e;
		i = i + 1;
	}
	
	return s;
	
}