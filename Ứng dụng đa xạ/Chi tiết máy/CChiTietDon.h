#pragma once
#include"CChiTiet.h"

class CChiTietDon :public CChiTiet
{
protected:
	float GiaTien;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien();
	virtual CChiTiet* TimKiem(long);
};

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap gia: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat()
{
	cout << "Ma so: " << MaSo;
	cout << "Gia: " << GiaTien;
}

float CChiTietDon::TinhTien()
{
	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	return NULL;
}