#include<iostream>
#include<cmath>
using namespace std;
int xuly(int&);
int main()
{
	int n;
	cin >> n;
	cout << xuly(n);
	return 0;
}
int xuly(int& n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}