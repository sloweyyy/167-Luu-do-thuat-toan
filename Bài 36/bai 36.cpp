#include <iostream>
using namespace std;
float luythua(float,int);
int main()
{
	int x,n;
	cout << "Nhap x= ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float kq = luythua(n,x);
	cout << "T(" << n << ","<<x<<") = " << kq;
	return 0;
}
float luythua(float y, int k)
{
	float t = 1;
;	for (int i = 1; i <= k;i++)
	{
		t = t * y;
	}
	return t;
}