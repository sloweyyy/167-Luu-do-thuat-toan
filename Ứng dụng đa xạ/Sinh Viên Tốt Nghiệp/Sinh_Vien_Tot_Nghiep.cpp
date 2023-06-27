#include <iostream>
#include <string>

using namespace std;
class CSinhVien
{
protected:
	int MSSV;
	string HoTen;
	string DiaChi;
	int SoTinChi;
	float DiemTrungBinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float GetDTB();
	virtual int KiemTra();

};

class CCaoDang : public CSinhVien
{
protected:
	float DiemTotNghiep;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float GetDTB();
	virtual int KiemTra();
};

class CDaiHoc : public CSinhVien
{
protected:
	string TenLuanVan;
	float DiemLuanVan;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float GetDTB();
	virtual int KiemTra();
};

class CTruong 
{
protected:
	int n;
	CSinhVien* ds[1000];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float GetDTB();
	virtual int KiemTra();
};


void CSinhVien::Nhap()
{
	return;
}

void CSinhVien::Xuat()
{
	return;
}

float CSinhVien::GetDTB()
{
	return DiemTrungBinh;
}

int CSinhVien::KiemTra()
{
	return 0;
}

void CCaoDang::Nhap()
{
	cout << "Nhap ma so sinh vien: ";
	cin >> MSSV;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, DiaChi);
	cout << "Nhap tong so tin chi: ";
	cin >> SoTinChi;
	cout << "Nhap diem trung binh: ";
	cin >> DiemTrungBinh;
	cout << "Nhap diem tot nghiep: ";
	cin >> DiemTotNghiep;
	cout << "----------------------\n";
}

void CCaoDang::Xuat()
{
	cout << "Ma so sinh vien la: " << MSSV << endl;
	cout << "Ho ten sinh vien la:  " << HoTen << endl;
	cout << "Dia chi sinh vien la: " << DiaChi << endl;
	cout << "So tin chi la: " << SoTinChi << endl;
	cout << "Diem trung binh la: " << DiemTrungBinh << endl;
	cout << "Diem tot nghiep la: " << DiemTotNghiep << endl;
	cout << "----------------------\n";
}

float CCaoDang::GetDTB()
{
	return DiemTrungBinh;
}

int CCaoDang::KiemTra()
{
	if ((SoTinChi >= 120) && (DiemTrungBinh >= 5) && (DiemTotNghiep >= 5))
		return 1;
	return 0;
}

void CDaiHoc::Nhap()
{
	cout << "Nhap ma so sinh vien: ";
	cin >> MSSV;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, DiaChi);
	cout << "Nhap tong so tin chi: ";
	cin >> SoTinChi;
	cout << "Nhap diem trung binh: ";
	cin >> DiemTrungBinh;
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, TenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> DiemLuanVan;
	cout << "----------------------\n";
}

void CDaiHoc::Xuat()
{
	cout << "Ma so sinh vien la: " << MSSV << endl;
	cout << "Ho ten sinh vien la:  " << HoTen << endl;
	cout << "Dia chi sinh vien la: " << DiaChi << endl;
	cout << "So tin chi la: " << SoTinChi << endl;
	cout << "Diem trung binh la: " << DiemTrungBinh << endl;
	cout << "Ten luan van la: " << TenLuanVan << endl;
	cout << "Diem luan van la: " << DiemLuanVan << endl;
	cout << "----------------------\n";
}

float CDaiHoc::GetDTB()
{
	return DiemTrungBinh;
}

int CDaiHoc::KiemTra()
{
	if ((SoTinChi >= 170) && (DiemTrungBinh >= 5) && (DiemLuanVan >= 5))
		return 1;
	return 0;
}

void CTruong::Nhap()
{
	cout << "Nhap so sinh vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int Loai;
		cout << "Chon loai sinh vien ( 0.Cao Dang / 1.Dai hoc ): ";
		cin >> Loai;
		switch (Loai)
		{
		case 0: ds[i] = new CCaoDang; break;
		case 1: ds[i] = new CDaiHoc; break;
		}
		ds[i]->Nhap();
	}
}

void CTruong::Xuat()
{
	cout << "So hoc sinh cua truong la " << n << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
		cout << endl;
	}
}

float CTruong::GetDTB()
{
	float max = 0;
	CSinhVien* temp = ds[0];
	for (int i = 0; i < n; i++)
	{
		float s = ds[i]->GetDTB();
		if (s > max)
		{
			max = s;
			temp = ds[i];
		}
	}
	temp->Xuat();
	return max;
}

int CTruong::KiemTra()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem = dem + ds[i]->KiemTra();
	}
	return dem;
}

int main()
{
	CTruong UIT;
	UIT.Nhap();
	UIT.Xuat();
	cout << "So hoc sinh Tot Nghiep la " << UIT.KiemTra() << endl;
	cout << "Hoc sinh co diem trung binh cao nhat la " << endl;
	UIT.GetDTB();
	return 0;

}
