#include <iostream>
using namespace std;

long long uscln(long long, long long);
long long bscnn(long long, long long);

int main()
{
	long long  a, b;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	long long bcnn = bscnn(a, b);
	cout << "Boi chung lon nhat cua hai so vua nhap la: " << bcnn;
	return 1;
}

long long uscln(long long a, long long b)
{
	a = abs(a);
	b = abs(b);
	while (a != 0 && b != 0)
	{
		if (a > b)
			a -= b;
		else b -= a;

	}
	return a + b;
}

long long bscnn(long long a, long long b)
{
	return (a / uscln(a, b)) * b;
}
