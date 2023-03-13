#include<iostream>
using namespace std;
void xuly(int&, int&);
int main()
{
	int x, y;
	cin >> x >> y;
	xuly(x, y);
	return 0;
}
void xuly(int& x, int& y)
{
	int i = x;
	while (i <= y)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
			cout << i << " ";
		i++;
	}
}