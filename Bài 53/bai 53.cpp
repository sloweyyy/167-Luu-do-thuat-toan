#include <iostream>
using namespace std;
void lietke(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	lietke(n);
	return 0;
}
void lietke(int k)
{
	cout << "Cac uoc so le  cua " << k << " la: ";
	for (int i = 1; i <= k; i=i+2)
		if (k % i == 0)
			cout << i << " ";
}