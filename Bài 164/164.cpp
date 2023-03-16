#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = (float)1 / (1 + s);
		i++;
	}
	cout << "s(" << n << ")= " << s;
	return 19;
}