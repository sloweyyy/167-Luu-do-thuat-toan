#include <iostream>
using namespace std;

void InputN(int& n)
{
	cout << "Nhap gia tri nguyen duong n: ";
	cin >> n;
}

void XuLy(int n)
{
	int a = 1;
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		a = a * 2;
		cout << "Gia tri a(" << i << ") = " << a << endl;
	}
}
int main()
{
	int n;
	InputN(n);
	XuLy(n);
	return 19;
}
