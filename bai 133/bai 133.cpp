#include<iostream>
#include<cmath>
using namespace std;
void xuly(float&, float&, float&);
int main()
{
	float x, y, z;
	cout << "nhap 3 canh cua tam giac: ";
	cin >> x >> y >> z;
	xuly(x, y, z);
	return 0;
}
void xuly(float& x, float& y, float& z)
{
	if ((x + y) > z && (x + z) > y && (y + z) > x)
	{
		if (x == y && y == z)
			cout << "tam giac deu";
		else
		{
			if ((pow(x, 2) + pow(y, 2) == pow(z, 2)) || (pow(y, 2) + pow(z, 2) == pow(x, 2)) || (pow(x, 2) + pow(z, 2) == pow(y, 2)))
			{
				if (x == y || y == z || x == z)
					cout << "tam giac vuong can";
				else
				{
					cout << "tam giac vuong";
				}
			}
			else
			{
				if (x == y || y == z || x == z)
					cout << "tam giac can";
				else
					cout << "tam giac thuong";
			}
		}
	}
	else
		cout << "khong la tam giac";
}