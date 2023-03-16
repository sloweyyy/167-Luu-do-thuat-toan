#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cout << "Nhap n: ";
	cin >> n;
	a = n;
	cout << a;
	for (int i = 2; a != 1; i++)
	{
		if (a % 2 == 0)
			a = a / 2;
		else
			a = a * 3 + 1;
		cout << " " << a;
	}
	return 1;
}