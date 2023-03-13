#include <iostream>
using namespace std;
void Nhap(int&);
int hangtram(int);
int main()
{
	int n;
	Nhap(n);
	int ht = hangtram(n);
	cout << "Chu so hang tram = " << ht;
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap : ";
	cin >> n;
}
int hangtram(int n)
{

	return  (n / 100) % 10;
}