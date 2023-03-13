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
	int flag = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i * i == n)
			flag = 1;
	}
	if (flag == 1)
		cout << n << " la so chinh phuong";
	else
		cout << " khong la so chinh phuong";
}