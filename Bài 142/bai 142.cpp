#include<iostream>
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
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	return dn;
}