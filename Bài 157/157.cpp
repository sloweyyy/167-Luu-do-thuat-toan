#include <iostream>
using namespace std;
int main() {
	int i;
	cout << "Nhap i: ";
	cin >> i;
	float a = 0;
	for (int n = 1; n <= i; n++)
	{
		a = a + (float)1 / n;
		cout << "\na" << n << "=" << a;
	}
	return 19;
}
