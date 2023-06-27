#pragma once
#include"CChiTiet.h"

class CMay
{
protected:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
};

void CMay::Nhap()
{
	cout << "Nhap so luong chi tiet cua may: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai (0. Don, 1. Phuc): ";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CChiTietDon;
			break;
		case 1: ds[i] = new CChiTietPhuc;
			break;
		}
		ds[i]->Nhap();
	}
}

void CMay::Xuat()
{
	cout << "\n So luong chi tiet cua may: " << n;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
		cout << endl;
	}
}

CChiTiet* CMay::TimKiem(long ms)
{
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq == NULL)
			return kq;
	}
	return NULL;
}

float CMay::TinhTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhTien();
	return s;
}
