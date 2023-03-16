#include <iostream>
using namespace std;
float tong(int,int);
int main()
{
	int x,n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tong(x,n);
	cout << "S(" << x << ", " <<n<<")= " <<kq;
	return 1;
}
float tong(int y, int k)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= k)
	{

		t = t * y;
		s = s + t;
		i = i + 1;
	}
	return s;
}