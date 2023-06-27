#pragma once
#include"CChiTietDon.h"

class CChiTietPhuc:public CChiTiet
{
protected:
	int n;
	CChiTiet* ds[100];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien();
	virtual CChiTiet* TimKiem(long);
};

float CChiTietPhuc::TinhTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhTien();
	return s;
}

CChiTiet* CChiTietPhuc::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq == NULL)
			return kq;
	}
	return NULL;
}

void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap so luong chi tiet thanh phan: ";
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

void CChiTietPhuc::Xuat()
{
	cout << "\n Ma so: " << MaSo;
	cout << "\n So luong chi tiet thanh phan: " << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}