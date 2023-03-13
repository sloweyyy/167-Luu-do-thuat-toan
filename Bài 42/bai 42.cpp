#include <iostream>
using namespace std;
float tong(int);
int main()
{
	int n;
	float t = 1, m = 2;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += (t / m);
		t = t + 2;
		m = m + 2;
	}
	cout << s;
	return 0;
}