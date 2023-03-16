#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int lc = n % 10;
	int t = n, dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (lc < dv)
			lc = dv;
		t /= 10;
	}
	int m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (lc == dv)
			dem++;
		m /= 10;
	}
	cout << "So "<< n<< " co " << dem << " chu so lon nhat";
	return 19;
}