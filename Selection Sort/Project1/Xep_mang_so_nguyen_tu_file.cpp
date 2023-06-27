#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int InPut(int a[], int& n, string filename) {
	ifstream fi(filename);
	if (fi.fail() == true)
		return 0;
	fi >> n;
	for (int i = 0; i < n; i++) 
		fi >> a[i];
	return 1;
}

void SelectionSort(int a[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		int flag = i;
		for (int j = i ; j < n; j++)
			if (a[j] < a[flag])
				flag=j;
		swap(a[i], a[flag]);
	}
}

int OutPut(int a[], int n, string filename) {
	ofstream fo(filename);
	if (fo.fail() == true)
		return 0;
	fo << setw(5) << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(5) << a[i];
	return 1;
}

int main() {
	int a[100000];
	int n;
	for (int i = 1; i <= 13; i++) {
		string intdata = "C:/Users/PC/source/repos/Together/file input/intdata";
		if (i < 10)
			intdata += '0';
		intdata += to_string(i);
		intdata += ".inp";
		if (InPut(a, n, intdata) == 1) {
			SelectionSort(a, n);
			string OutIntdata = "C:/Users/PC/source/repos/Together/output Selection Sort/out_intdata";
			if (i < 10)
				OutIntdata += '0';
			OutIntdata += to_string(i);
			OutIntdata += ".out";
			if (OutPut(a, n, OutIntdata) == 0)
				cout << "Xuat file " << OutIntdata << endl << " khong thanh cong" << endl;
			else cout << "Xuat file " << OutIntdata << endl << " thanh cong" << endl;
		}
		else {
			cout << "Doc file khong thanh cong" << endl;
			return 0;
		}
	}
	return 1;
}