#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	while (t >= 10)
		t /= 10;
	int dem = 0;
	int m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (dv == t)
			dem++;
		m /= 10;
	}
	cout <<"So phan tu dau tien cua "<<n<<" la "<< dem;
	return 19;
}