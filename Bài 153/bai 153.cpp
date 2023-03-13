#include<iostream>
using namespace std;
void xuly(int&);
int main()
{
	int n;
	cin >> n;
	xuly(n);
	return 0;
}
void xuly(int& n)
{
	int flag = 1;
	int t = n;
	for (int i = 1; t > 1; t /= 5)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
	}
	if (flag == 1)
		cout << "co dang 5^m";
	else
		cout << "khong co dang 5^m";
}