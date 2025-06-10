// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLySinhVien.h"

void QuanLySinhVien::ThemSVCaoDang()
{
	SVCaoDang* sv = new SVCaoDang();
	sv->Nhap();
	dsSinhVien.push_back(sv);
}

void QuanLySinhVien::ThemSVDaiHoc()
{
	SVDaiHoc* sv = new SVDaiHoc();
	sv->Nhap();
	dsSinhVien.push_back(sv);
}

void QuanLySinhVien::NhapDS(int n)
{
	for (int i = 0; i < n; ++i)
	{
		int loai;
		cout << "Nhap loai sinh vien (1: Cao Dang, 2: Dai Hoc): ";
		cin >> loai;
		while (loai < 1 || loai > 2)
		{
			cout << "Khong hop le! Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemSVCaoDang();
		else if (loai == 2)
			ThemSVDaiHoc();
	}
}

void QuanLySinhVien::XuatDS() const
{
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		cout << i + 1 << ". ";
		dsSinhVien[i]->Xuat();
		cout << endl;
	}
}

void QuanLySinhVien::XuatDSSVDuDieuKienTotNghiep() const
{
	bool check = false;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i]->XetTotNghiep())
		{
			check = true;
			cout << i + 1 << ". ";
			dsSinhVien[i]->Xuat();
			cout << endl;
		}
	}
	if (!check)
	{
		cout << "Rong!" << endl;
	}
}

void QuanLySinhVien::XuatDSSVKhongDuDieuKienTotNghiep() const
{
	bool duDieuKienTotNghiep = false;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (!dsSinhVien[i]->XetTotNghiep())
		{
			duDieuKienTotNghiep = true;
			cout << i + 1 << ". ";
			dsSinhVien[i]->Xuat();
			cout << endl;
		}
	}
	if (!duDieuKienTotNghiep)
	{
		cout << "Rong!" << endl;
	}
}

void QuanLySinhVien::XuatSVDaiHocCoDTBCaoNhat() const
{
	vector<SVDaiHoc*> res;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i]->loai == SinhVien::DAI_HOC)
		{
			if (res.size() == 0 || dsSinhVien[i]->getDiemTB() > res[0]->getDiemTB())
			{
				res.clear();
				res.push_back((SVDaiHoc*)dsSinhVien[i]);
			}
			else if (dsSinhVien[i]->getDiemTB() == res[0]->getDiemTB())
			{
				res.push_back((SVDaiHoc*)dsSinhVien[i]);
			}
		}
	}

	if (res.size() == 0)
	{
		cout << "Khong co sinh vien dai hoc nao!" << endl;
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void QuanLySinhVien::XuatSVCaoDangCoDTBCaoNhat() const
{
	vector<SVCaoDang*> res;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i]->loai == SinhVien::CAO_DANG)
		{
			if (res.size() == 0 || dsSinhVien[i]->getDiemTB() > res[0]->getDiemTB())
			{
				res.clear();
				res.push_back((SVCaoDang*)dsSinhVien[i]);
			}
			else if (dsSinhVien[i]->getDiemTB() == res[0]->getDiemTB())
			{
				res.push_back((SVCaoDang*)dsSinhVien[i]);
			}
		}
	}
	if (res.size() == 0)
	{
		cout << "Khong co sinh vien cao dang nao!" << endl;
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

int QuanLySinhVien::XuatSoSVDaiHocKhongDuDieuKienTotNghiep() const
{
	int count = 0;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i]->loai == SinhVien::DAI_HOC && !dsSinhVien[i]->XetTotNghiep())
		{
			count++;
		}
	}
	return count;
}

int QuanLySinhVien::XuatSoSVCaoDangKhongDuDieuKienTotNghiep() const
{
	int count = 0;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i]->loai == SinhVien::CAO_DANG && !dsSinhVien[i]->XetTotNghiep())
		{
			count++;
		}
	}
	return count;
}