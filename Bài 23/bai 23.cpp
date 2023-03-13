#include <iostream>
using namespace std;
void Nhap(int&);
int hangchuc(int);
int main()
{
	int n;
	Nhap(n);
	int hc = hangchuc(n);
	cout << "Chu so hang chuc = " << hc;
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap : ";
	cin >> n;
}
int hangchuc(int n)
{

	return  (n / 10) % 10;
}