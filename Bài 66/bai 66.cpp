#include <iostream>
using namespace std;
int tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tong(n);
	return 0;
}
int tong(int k)
{
	int t = k;
	int flag = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Ton Tai";
	else
		cout << "Khong Ton Tai";
	return flag;
}