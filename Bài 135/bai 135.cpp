#include<iostream>
using namespace std;
void xuly(int&);
int main()
{
	int n;
	cin >> n;
	xuly(n);
	return 0;
}
void xuly(int& n)
{
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
		cout << "nam nhuan";
	else
		cout << "nam khong nhuan";
}