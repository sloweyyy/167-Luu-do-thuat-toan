#include <iostream>
using namespace std;
void Nhap(int&, int&);
int main()
{
	int a, b;
	Nhap(a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Hoan vi hai chu so a= " << a << " b = " << b;;
	return 0;
}
void Nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
