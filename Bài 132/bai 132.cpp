#include<iostream>
#include<cmath>
using namespace std;
void xuly(float&, float&, float&, float&, float&, float&, float&, float&);
int main()
{
	float x1, y1, x2, y2, x3, y3, x4, y4;
	cout << "nhap x1, y1 , x2 , y2 , x3 , y3 , x4 , y4: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	xuly(x1, y1, x2, y2, x3, y3, x4, y4);
	return 0;
}
void xuly(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3, float& x4, float& y4)
{
	float stong = (float)1 / 2 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
	float s1 = (float)1 / 2 * abs(x4 * y1 + x2 * y4 + x1 * y2 - x4 * y2 - x1 * y4 - x2 * y1);
	float s2 = (float)1 / 2 * abs(x1 * y4 + x4 * y3 + x3 * y1 - x4 * y1 - x3 * y4 - x1 * y3);
	float s3 = (float)1 / 2 * abs(x4 * y2 + x2 * y3 + x3 * y4 - x4 * y3 - x2 * y4 - x3 * y2);
	if ((s1 + s2 + s3) == stong)
		cout << "M nam trong tam giac";
	else
		cout << "M ngoai tam giac";
}