#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int  t = n;
	while (t >= 10)
	{
		int dv = t % 10;
		int tdv = (t % 100) / 10;
		if (dv > tdv)
			flag = 0;
		t /= 10;
	}
	if (flag == 1)
		cout << "Cac chu so giam dan tu trai sang phai";
	else
		cout << "Cac chu so khong giam dan tu trai sang phai";
	return 19;
}