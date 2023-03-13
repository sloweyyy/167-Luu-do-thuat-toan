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
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s += i;;
	}
	if (s == n)
		cout << n << " la so hoan thien";
	else
		cout << " khong la so hoan thien";
}