// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cQuanLyHocVien.h"
#include <map>

void cQuanLyHocVien::ThemHVHocSinhSinhVien()
{
	cHocSinhSinhVien* hv = new cHocSinhSinhVien();
	hv->Nhap();
	danhSachHocVien.push_back(hv);
}

void cQuanLyHocVien::ThemHVNguoiDiLam()
{
	cNguoiDiLam* hv = new cNguoiDiLam();
	hv->Nhap();
	danhSachHocVien.push_back(hv);
}

void cQuanLyHocVien::NhapDanhSachHocVien(int n)
{
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai hoc vien (1: Hoc Sinh/Sinh Vien, 2: Nguoi Di Lam): ";
		cin >> loai;
		while (loai < 1 || loai > 2)
		{
			cout << "Loai hoc vien khong hop le. Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemHVHocSinhSinhVien();
		else
			ThemHVNguoiDiLam();
	}
}

void cQuanLyHocVien::XuatDanhSachHocVien() const
{
	if (danhSachHocVien.empty())
	{
		cout << "Danh sach hoc vien rong.\n";
		return;
	}
	for (int i = 0; i < danhSachHocVien.size(); i++)
	{
		cout << i + 1 << ". ";
		danhSachHocVien[i]->Xuat();
		cout << endl;
	}
}

int cQuanLyHocVien::TinhTongHocPhi() const
{
	int tongHocPhi = 0;
	for (int i = 0; i < danhSachHocVien.size(); i++)
	{
		tongHocPhi += danhSachHocVien[i]->getHocPhi();
	}
	return tongHocPhi;
}

void cQuanLyHocVien::TimKhoaHocNhieuHocVienDangKyNhat() const
{
	if (danhSachHocVien.empty())
	{
		cout << "Danh sach hoc vien rong.\n";
		return;
	}
	map<unsigned char, int> khoaHocCount;
	for (int i = 0; i < danhSachHocVien.size(); i++)
	{
		khoaHocCount[danhSachHocVien[i]->getKhoaHoc()]++;
	}
	int max = 0;
	unsigned char khoaHocMax{};
	for (int i = 0; i < danhSachHocVien.size(); i++)
	{
		if (khoaHocCount[danhSachHocVien[i]->getKhoaHoc()] > max)
		{
			max = khoaHocCount[danhSachHocVien[i]->getKhoaHoc()];
			khoaHocMax = danhSachHocVien[i]->getKhoaHoc();
		}
	}
	if (khoaHocMax == '1')
		cout << "AV giao tiep co ban";
	else if (khoaHocMax == '2')
		cout << "Ielts";
	else
		cout << "Toeic";
	cout << ", voi " << max << " hoc vien";
}

void cQuanLyHocVien::XuatHocVienNguoiDiLamDongHocPhiNhieuNhat() const
{
	if (danhSachHocVien.empty())
	{
		cout << "Danh sach hoc vien rong.\n";
		return;
	}
	vector<cNguoiDiLam*> danhSachNguoiDiLam;
	for (int i = 0; i < danhSachHocVien.size(); i++)
	{
		if (danhSachHocVien[i]->loai == cHocVien::NGUOI_DI_LAM)
		{
			if (danhSachNguoiDiLam.size() == 0 || danhSachHocVien[i]->getHocPhi() > danhSachNguoiDiLam[0]->getHocPhi())
			{
				danhSachNguoiDiLam.clear();
				danhSachNguoiDiLam.push_back((cNguoiDiLam*)(danhSachHocVien[i]));
			}
			else if (danhSachHocVien[i]->getHocPhi() == danhSachNguoiDiLam[0]->getHocPhi())
			{
				danhSachNguoiDiLam.push_back((cNguoiDiLam*)(danhSachHocVien[i]));
			}
		}
	}
	if (danhSachNguoiDiLam.empty())
	{
		cout << "Khong tim thay du lieu hoc vien nguoi di lam";
		return;
	}
	for (int i = 0; i < danhSachNguoiDiLam.size(); i++)
	{
		danhSachNguoiDiLam[i]->Xuat();
		cout << endl;
	}
}
