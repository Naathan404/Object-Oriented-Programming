// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyGiaoDich.h"

void QuanLyGiaoDich::ThemGDDat()
{
	GDDat* gd = new GDDat();
	gd->Nhap();
	dsGiaoDich.push_back(gd);
}
void QuanLyGiaoDich::ThemGDNhaPho()
{
	GDNhaPho* gd = new GDNhaPho();
	gd->Nhap();
	dsGiaoDich.push_back(gd);
}
void QuanLyGiaoDich::ThemGDCanHoChungCu()
{
	GDCanHoChungCu* gd = new GDCanHoChungCu();
	gd->Nhap();
	dsGiaoDich.push_back(gd);
}

void QuanLyGiaoDich::Nhap(int n)
{
	for (int i = 0; i < n; ++i)
	{
		int loai;
		cout << "Nhap loai giao dich (1: Dat, 2: Nha Pho, 3: Can Ho Chung Cu): ";
		cin >> loai;
		while (loai < 1 || loai > 3)
		{
			cout << "Khong hop le! Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemGDDat();
		else if (loai == 2)
			ThemGDNhaPho();
		else
			ThemGDCanHoChungCu();
	}
}

int QuanLyGiaoDich::TinhTongSoGDDat() const
{
	int count = 0;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->loai == GDBatDongSan::DAT)
			count++;
	}
	return count;
}

int QuanLyGiaoDich::TinhTongSoGDNhaPho() const
{
	int count = 0;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->loai == GDBatDongSan::NHA_PHO)
			count++;
	}
	return count;
}

int QuanLyGiaoDich::TinhTongSoGDCanHoChungCu() const
{
	int count = 0;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->loai == GDBatDongSan::CAN_HO_CHUNG_CU)
			count++;
	}
	return count;
}

int QuanLyGiaoDich::TinhTBThanhTienGDCanHoChungCu() const
{
	int tb = 0;
	int n = 0;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->loai == GDBatDongSan::CAN_HO_CHUNG_CU)
		{
			tb += dsGiaoDich[i]->getThanhTien();
			n++;
		}
	}
	if (n == 0) return 0;
	return tb / n;
}

void QuanLyGiaoDich::XuatGDNhaPhoCoThanhTienLonNhat() const
{
	vector<GDNhaPho*> res;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->loai == GDBatDongSan::NHA_PHO)
		{
			if (res.size() == 0 || dsGiaoDich[i]->getThanhTien() > res[0]->getThanhTien())
			{
				res.clear();
				res.push_back((GDNhaPho*)dsGiaoDich[i]);
			}
			else if (dsGiaoDich[i]->getThanhTien() == res[0]->getThanhTien())
			{
				res.push_back((GDNhaPho*)dsGiaoDich[i]);
			}
		}
	}
	if (res.empty())
	{
		cout << "Khong tim thay du lieu ve giao dich nha pho!";
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void QuanLyGiaoDich::XuatDSGDVaoThang(int thang, int nam) const
{
	int k = 1;
	for (int i = 0; i < dsGiaoDich.size(); i++)
	{
		if (dsGiaoDich[i]->getNgayGD().getThang() == thang && dsGiaoDich[i]->getNgayGD().getNam() == nam)
		{
			cout << k << ". ";
			dsGiaoDich[i]->Xuat();
			cout << endl;
			k++;
		}
	}
	if (k == 1)
	{
		cout << "Khong co giao dich vao thang " << thang << " nam " << nam << "!";
	}
}
