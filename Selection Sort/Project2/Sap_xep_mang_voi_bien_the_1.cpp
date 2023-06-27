#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Input(int a[], int& n, string filename) {
	ifstream fi(filename);
	if (fi.fail() == true)
		return 0;
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
	return 1;
}
int Output(int a[], int n, string filename) {
	ofstream fo(filename);
	if (fo.fail() == true)
		return 0;
	fo << setw(5) << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(5) << a[i];
	return 1;
}
void SelectionSort(int a[], int n) {
	for (int i = 0; i <= n - 2; i++) {
		int lc = i;
		for (int j = n - 1; j >= i + 1; j--)
			if (a[j] < a[lc])
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
		if (Input(a, n, intdata)==1) {
			SelectionSort(a, n);
			string outdata = "C:/Users/PC/source/repos/Together/output Selection Sort/bienthe1_intdata";
			if (i < 10)
				outdata += '0';
			outdata += to_string(i);
			outdata += "_SelectionSort.out";
			Output(a, n, outdata);
			if (Output(a, n, outdata) == 0) cout << "Khong ghi duoc file";
			else cout << outdata << endl;
		}
		else cout << "Doc file khong thanh cong";
	}
	return 1;
}