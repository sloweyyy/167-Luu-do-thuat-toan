#include <iostream>
#include <cmath>
using namespace std;
struct toado {
	float x;
	float y;
};
void nhap(toado & A) {
	cout << " Nhap toa do x: ";
	cin >> A.x;
	cout << " Nhap toa do y: ";
	cin >> A.y;
}
float KhoangCach(toado A, toado B) {
	float d = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	return d;
}
int main() {
	toado A, B;
	cout << "Nhap toa do diem A:" << endl;
	nhap(A);
	cout << "Nhap toa do diem B:" << endl;
	nhap(B);
	float d = KhoangCach(A, B);
	cout << "Khoang cach giua hai diem da nhap la: " << d;
	return 1;
}