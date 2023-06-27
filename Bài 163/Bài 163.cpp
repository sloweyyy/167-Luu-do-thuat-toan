#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int max = n;
	while (max >= n / 2)
	{
		if (max % 2 == 0)
			max /= 2;
	}
	cout <<"Uoc so le lon nhat cua "<<n<<" la " << max;
	return 11;
}