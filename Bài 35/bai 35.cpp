#include <iostream>
using namespace std;
float tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tich(n);
	cout << "T(" << n << ")= " << kq;
	return 0;
}
float tich(int k)
{
	float t = 1;
	int i = 2;
	while (i <= k )
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}