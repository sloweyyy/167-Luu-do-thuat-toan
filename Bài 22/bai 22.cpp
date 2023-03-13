#include <iostream>
using namespace std;
void Nhap(int&);
int donvi(int);
int main()
{
	int n;
	Nhap(n);
	int dv = donvi(n);
	cout << "Chu so hang don vi = " << dv;
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap : ";
	cin >>  n;
}
int donvi(int n)
{
	
	return  n  % 10;
}