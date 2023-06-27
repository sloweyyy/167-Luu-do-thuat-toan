#include <iostream>
#include <string>
using namespace std;

class CVe
{
protected:
	string MaVe;
	string HoTen;
	int NamSinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhTongTien();
	virtual int KiemTraTungPhan();
};

class CVeTronGoi:public CVe
{
protected:
	int SoTroChoi;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhTongTien();
	virtual int KiemTraTungPhan();
};

class CVeTungPhan: public CVe
{
protected:
	int SoTroChoi;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhTongTien();
	virtual int KiemTraTungPhan();
};
	
class CCongVien
{
protected:
	int n;
	CVe* ds[100];
public:
	void Nhap();
	void Xuat();
	long TinhTongTien();
	int TinhSoVeTungPhan();
};

void CCongVien::Nhap()
{
	cout << "Nhap so luong ve da ban: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai: (0. Ve tron goi, 1. Ve tung phan): ";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CVeTronGoi;
			break;
		case 1: ds[i] = new CVeTungPhan;
			break;
		}
		ds[i]->Nhap();
	}
}

long CCongVien::TinhTongTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhTongTien();
	return s;
}

void CCongVien::Xuat()
{
	long tongtien = TinhTongTien();
	int sovetungphan = TinhSoVeTungPhan();
	cout << "Tong tien ve ma cong vien thu duoc: " << tongtien << endl;
	cout << "So ve tung phan ma nhanh vien thu duoc la: " << sovetungphan << endl;
}

int CCongVien::TinhSoVeTungPhan()
{
	float dem = 0;
	for (int i = 0; i < n; i++)
		if (ds[i]->KiemTraTungPhan() == 1)
			dem++;
	return dem;
}

void CVeTungPhan::Nhap()
{
	cout << "Nhap ma ve: ";
	cin.ignore();
	getline(cin, MaVe);
	cout << "Nhap ho ten nguoi mua ve: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap nam sinh nguoi mua ve: ";
	cin >> NamSinh;
	cout << "Nhap so tro choi da choi: ";
	cin >> SoTroChoi;
}

void CVeTungPhan::Xuat()
{
	cout << "Ma so ve: " << MaVe << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Nam sinh: " << NamSinh << endl;
	cout << "So tro choi da choi: " << SoTroChoi << endl;
}

long CVeTungPhan::TinhTongTien()
{
	return (70 + SoTroChoi * 20);
}

int CVeTungPhan::KiemTraTungPhan()
{
	return 1;
}

void CVeTronGoi::Nhap()
{
	cout << "Nhap ma ve: ";
	cin.ignore();
	getline(cin, MaVe);
	cout << "Nhap ho ten nguoi mua ve: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap nam sinh nguoi mua ve: ";
	cin >> NamSinh;
	cout << "Nhap so tro choi da choi: ";
	cin >> SoTroChoi;
}

void CVeTronGoi::Xuat()
{
	cout << "Ma so ve: " << MaVe << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Nam sinh: " << NamSinh << endl;
	cout << "So tro choi da choi: " << SoTroChoi << endl;
}

long CVeTronGoi::TinhTongTien()
{
	return 200;
}

int CVeTronGoi::KiemTraTungPhan()
{
	return 0;
}

void CVe::Nhap()
{
	return;
}

void CVe::Xuat()
{
	return;
}

long CVe::TinhTongTien()
{
	return 0;
}

int CVe::KiemTraTungPhan()
{
	return 0;
}

int main()
{
	CCongVien cv;
	cv.Nhap();
	cv.Xuat();
	return 1;
}