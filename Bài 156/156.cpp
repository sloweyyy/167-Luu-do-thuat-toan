#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int i = 1;
	int t = 1;
	cout << "Day gia tri la ";
	while (i <= n)
	{
		t = t * i;
		cout << t << " ";
		i = i + 1;
	}
	return 0;
}