#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int Nhap(int[], int&, string);
int Xuat(int[], int, string);
void SelectionSort(int[], int);

int Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	if (fi.fail() == true)
		return 0;
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;

}

int Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	if (fo.fail() == true)
		return 0;
	fo << setw(5) << n << endl;
	for (int i = 0; i < n; i++)
		fo << a[i] << setw(5);
	return 1;

}

void SelectionSort(int a[], int n)
{
	for (int i = n-1; i >0; i--)
	{
		int lc = i;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] > a[lc]) 
				lc = j;
		swap(a[i], a[lc]);
	}
}

int main() {
	int a[10000];
	int n;
	for (int i = 1; i <= 13; i++)
	{
		string filename = "C:/Users/PC/source/repos/Together/file input/intdata";
		if (i < 10)
			filename += '0';
		string filenameinp = filename + to_string(i);
		filenameinp += ".inp";
		if (Nhap(a, n, filenameinp) == 1)
		{
			SelectionSort(a, n);
			string filenameout = "C:/Users/PC/source/repos/Together/output Selection Sort/bienthe2_intdata";
			if (i < 10)
				filenameout += '0';
			filenameout += to_string(i);
			filenameout += "_SelectionSort.out";
			Xuat(a, n, filenameout);
			cout << filenameout << endl;
		}
		else cout << " Doc file khong thanh cong\n";
	}
	return 0;
}