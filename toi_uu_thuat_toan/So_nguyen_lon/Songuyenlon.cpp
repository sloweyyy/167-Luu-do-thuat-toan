#include <iostream>
#include <string>
#include <ctime>
using namespace std;

typedef string BigNum;
int compareBigNum(BigNum, BigNum);
char toChar(int);
int toNumber(char);
BigNum addBigNum(BigNum, BigNum);
BigNum subBigNum(BigNum, BigNum);
bool ktKhac0(BigNum);
BigNum UCLN(BigNum, BigNum);
BigNum divBigNum(BigNum, BigNum);
BigNum modBigNum(BigNum, BigNum);
BigNum Fibonacci(BigNum);


int main()
{
	BigNum n, m;
	int p, q;
	clock_t start, end;
	double time_use;
	cout << "Nhap so chu so cua n: ";
	cin >> p;
	cout << "Nhap so chu so cua m: ";
	cin >> q;
	n += toChar(rand() % 9 + 1);
	m += toChar(rand() % 9 + 1);
	for (int i = 1; i < p; i++)
	{
		n += toChar(rand() % 10);
	}
	for (int i = 1; i < q; i++)
	{
		m += toChar(rand() % 10);
	}
	cout << "n la: " << n << endl;
	cout << "m la: " << m << endl;
	int flag = compareBigNum(n, m);
	if (flag == 1)
	{
		cout << "So " << n << " lon hon" << endl;
	}
	else if (flag == -1)
	{
		cout << "So " << m << " lon hon" << endl;
	}
	else cout << "Hai so bang nhau" << endl;
	BigNum s = addBigNum(n, m);
	cout << "Tong hai so nguyen la: " << s << endl;
	BigNum h = subBigNum(n, m);
	cout << "Hieu hai so nguyen la: " << h << endl;
	/*
	BigNum ucln = UCLN(n, m);
	cout << "Uoc chung lon nhat cua hai so la: " << ucln << endl;
	BigNum div = divBigNum(n, m);
	cout << "Thuong hai so nguyen la: " << div << endl;
	BigNum mod = modBigNum(n, m);
	cout << "Chia lay du hai so nguyen la: " << mod << endl;
	*/
	BigNum fibo = Fibonacci(n);
	cout << "Fibonacci la: " << fibo;
	return 1;
}

int compareBigNum(BigNum a, BigNum b)
{
	while (a.size() < b.size())
		a = '0' + a;
	while (b.size() < a.size())
		b = '0' + b;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

char toChar(int n)
{
	char Letter[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	return Letter[n];
}

int toNumber(char c)
{
	if (c == '0')
		return 0;
	if (c == '1')
		return 1;
	if (c == '2')
		return 2;
	if (c == '3')
		return 3;
	if (c == '4')
		return 4;
	if (c == '5')
		return 5;
	if (c == '6')
		return 6;
	if (c == '7')
		return 7;
	if (c == '8')
		return 8;
	if (c == '9')
		return 9;
	if (c == 'A')
		return 10;
	if (c == 'B')
		return 11;
	if (c == 'C')
		return 12;
	if (c == 'D')
		return 13;
	if (c == 'E')
		return 14;
	return 15;
}

BigNum addBigNum(BigNum a, BigNum b)
{
	while (a.size() < b.size())
		a = '0' + a;
	while (b.size() < a.size())
		b = '0' + b;
	int carry = 0;
	BigNum temp = "";
	for (int i = a.size() - 1; i >= 0; i--)
	{
		int aa = toNumber(a[i]);
		int bb = toNumber(b[i]);
		int ss = aa + bb + carry;

		temp = toChar(ss % 10) + temp;
		carry = ss / 10;
	}
	if (carry > 0)
		temp = "1" + temp;
	return temp;
}

BigNum subBigNum(BigNum a, BigNum b)
{
	while (a.size() < b.size())
		a = '0' + a;
	while (b.size() < a.size())
		b = '0' + b;
	int borrow = 0;
	BigNum temp = "";
	for (int i = a.size() - 1; i >= 0; i--)
	{
		int aa = toNumber(a[i]);
		int bb = toNumber(b[i]);
		int ss = aa - bb - borrow;
		if (ss < 0)
		{
			ss += 10;
			borrow = 1;
		}
		else
			borrow = 0;
		temp = toChar(ss) + temp;
	}
	while (temp.size() > 1 && temp[0] == '0')
		temp.erase(0, 1);
	return temp;
}

bool ktKhac0(BigNum a)
{
	for (int i = 0; i < a.size(); i++)
		if (a[i] != '0') return true;
	return false;
}

BigNum UCLN(BigNum a, BigNum b)
{
	while (ktKhac0(b))
	{
		a = modBigNum(a, b);
		swap(a, b);
		
	}
	return a;
}

BigNum divBigNum(BigNum a, BigNum b)
{
	BigNum kY[11];
	kY[0] = "0";
	for (int i = 1; i <= 10; i++)
		kY[i] = addBigNum(kY[i - 1], b);

	BigNum temp = "";
	BigNum hold = "";
	for (int i = 0; i < a.size(); i++)
	{
		hold += a[i];

		int k = 0;
		while (compareBigNum(hold, kY[k + 1]) != -1)
			k++;
		temp += toChar(k);
		hold = subBigNum(hold, kY[k]);
	}
	while (temp.size() > 1 && temp[0] == '0')
		temp.erase(0, 1);
	return temp;
}

BigNum modBigNum(BigNum a, BigNum b)
{
	BigNum kY[11];
	kY[0] = "0";
	for (int i = 1; i <= 10; i++)
		kY[i] = addBigNum(kY[i - 1], b);
	BigNum hold = "";
	for (int i = 0; i < a.size(); i++)
	{
		hold += a[i];

		int k = 0;
		while (compareBigNum(hold, kY[k + 1]) != -1)
			k++;
		hold = subBigNum(hold, kY[k]);
	}
	return hold;

}

BigNum Fibonacci(BigNum a)
{
	if ((ktKhac0(a)) == false)
		return "";
	if (a == "1")
		return "1";
	BigNum c = "1";
	BigNum d = "2";
	return Fibonacci(addBigNum(subBigNum(a, c), Fibonacci(subBigNum(a, d)));
}