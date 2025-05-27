// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNV.h"

void cQuanLyNV::ThemNVSanXuat()
{
	cNVSanXuat* nv = new cNVSanXuat;
	nv->Nhap();
	dsNhanVien.push_back(nv);
}

void cQuanLyNV::ThemNVVanPhong()
{
	cNVVanPhong* nv = new cNVVanPhong;
	nv->Nhap();
	dsNhanVien.push_back(nv);
}

void cQuanLyNV::Nhap(int n)
{
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap loai nhan vien (1: San xuat, 2: Van phong): ";
		cin >> loai;
		while (loai < 1 || loai > 2)
		{
			cout << "Khong hop le! Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemNVSanXuat();
		else
			ThemNVVanPhong();
	}
}

void cQuanLyNV::Xuat() const
{
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		cout << i + 1 << ". ";
		dsNhanVien[i]->Xuat();
		cout << endl;
	}
}

int cQuanLyNV::TinhTongLuong() const
{
	int tong = 0;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		tong += dsNhanVien[i]->getLuong();
	}
	return tong;
}

void cQuanLyNV::XuatNVSanXuatLuongThapNhat() const
{
	vector<cNVSanXuat*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (dsNhanVien[i]->loai == cNhanVien::SAN_XUAT)
		{
			if (res.size() == 0 || dsNhanVien[i]->getLuong() < res[0]->getLuong())
			{
				res.clear();
				res.push_back((cNVSanXuat*)dsNhanVien[i]);
			}
			else if (dsNhanVien[i]->getLuong() == res[0]->getLuong())
			{
				res.push_back((cNVSanXuat*)dsNhanVien[i]);
			}
		}
	}
	if (res.empty())
	{	
		cout << "Khong co du lieu ve nhan vien san xuat!";
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void cQuanLyNV::XuatNVVanPhongLonTuoiNhat() const
{
	vector<cNVVanPhong*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (res.size() == 0 || dsNhanVien[i]->getNgaySinh().SoSanh(res[0]->getNgaySinh()) == 1)
		{
			res.clear();
			res.push_back((cNVVanPhong*)dsNhanVien[i]);
		}
		else if (dsNhanVien[i]->getNgaySinh().SoSanh(res[0]->getNgaySinh()) == 0)
		{
			res.push_back((cNVVanPhong*)dsNhanVien[i]);
		}
	}
	if (res.empty())
	{
		cout << "Khong co du lieu ve nhan vien van phong!";
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}