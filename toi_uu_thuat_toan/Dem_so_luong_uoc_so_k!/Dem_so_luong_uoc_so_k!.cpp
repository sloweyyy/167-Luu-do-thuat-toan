#include<iostream>
#include<vector>
#include <string>
#include<ctime>
using namespace std;

typedef string BigNum;

vector<unsigned long long> Factorization(unsigned long long);
unsigned long long sumDivisors(unsigned long long);
unsigned long long countDivisors(unsigned long long);
BigNum BigSumDivisors(long long);

int main()
{
	clock_t start, end;
	double time_use;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	start = clock();
	for (int i = 1; i <= n; i++)
	{
		cout << "Tong cua " << i << "! la: " << sumDivisors(i) << "\n";
		cout << "So luong uoc cua " << i << "! la: " << countDivisors(i) << "\n";
		cout << "Phan tich thua so cua " << i << "! la: ";
		vector<unsigned long long> PhanTichThuaSo = Factorization(i);
		for (int j = 0; j <= i; j++)
			if (PhanTichThuaSo[j] > 0)
				cout << j << "^" << PhanTichThuaSo[j] << " ";
		cout << "\n";
	}
	end = clock();
	time_use = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "\nThoi gian chay la: " << time_use;

	return 1;

}
vector<unsigned long long> Factorization(unsigned long long n)
{
	vector<unsigned long long> minprime(n + 1);
	for (unsigned long long p = 0; p <= n; p++)
		minprime[p] = p;
	for (unsigned long long p = 2; p * p < +n; p++)
		if (minprime[p] == p)
			for (unsigned long long i = p * p; i <= n; i += p)
				if (minprime[i] == i)
					minprime[i] = p;

	vector<unsigned long long> prime_factor(n + 1);
	for (unsigned long long i = 0; i <= n; i++)
		prime_factor[i] = 0;
	for (unsigned long long i = 1; i <= n; i++)
	{
		unsigned long long temp = i;
		while (temp > 1)
		{
			prime_factor[minprime[temp]]++;
			temp = temp / minprime[temp];
		}
	}

	return prime_factor;
}
unsigned long long sumDivisors(unsigned long long n)
{
	vector<unsigned long long> PhanTichThuaSo = Factorization(n);
	unsigned long long result = 1;
	for (unsigned long long i = 2; i <= n; i++)
		if (PhanTichThuaSo[i] > 0)
		{
			unsigned long long power = 1;
			for (unsigned long long j = 1; j <= PhanTichThuaSo[i]; j++)
				power = power * i;
			power = power * i;
			result = result * (power - 1) / (i - 1);
		}
	return result;
}

unsigned long long countDivisors(unsigned long long n)
{
	vector<unsigned long long> PhanTichThuaSo = Factorization(n);
	unsigned long long count = 1;
	for (int i = 0; i <= n; i++)
	{
		if (PhanTichThuaSo[i] > 0)
			count = count * (PhanTichThuaSo[i] + 1);
	}
	return count;
}