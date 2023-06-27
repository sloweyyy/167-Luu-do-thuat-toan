#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int Nhap(int a[], int & n, string filename) {
	ifstream fi(filename);
	if (fi.fail())
		return 0;
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;
}
int Xuat(int a[], int n, string filename) {
	ofstream fo(filename);
	if (fo.fail())
		return 0;
	fo << setw(5) << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(5) << a[i];
	return 1;
}
void SelectionSort(int a[], int n) {
	for (int i = n - 1; i > 0; i--) {
		int lc = i;
		for (int j = i - 1; j >= 0; j--)
			if (a[j] > a[lc])
				lc = j;
		swap(a[i], a[lc]);
	}
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
		if (Nhap(a, n, intdata) == 1) {
			SelectionSort(a, n);
			string outdata = "C:/Users/PC/source/repos/Together/output Selection Sort/bienthe3_intdata";
			if (i < 10)
				outdata += '0';
			outdata += to_string(i);
			outdata += "_SelectionSort.out";
			Xuat(a, n, outdata);
			if (Xuat(a, n, outdata) == 0) cout << "Khong ghi duoc file";
			else cout << outdata << endl;
		}
		else cout << "Doc file khong thanh cong";
	}
	return 1;	
}