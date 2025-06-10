// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyNhanVien.h"

void QuanLyNhanVien::ThemLapTrinhVien()
{
	LapTrinhVien* nv = new LapTrinhVien();
	nv->Nhap();
	dsNhanVien.push_back(nv);
}

void QuanLyNhanVien::ThemKiemChungVien()
{
	KiemChungVien* nv = new KiemChungVien();
	nv->Nhap();
	dsNhanVien.push_back(nv);
}

void QuanLyNhanVien::NhapDS(int n)
{
	for (int i = 0; i < n; ++i)
	{
		int loai;
		cout << "Nhap loai nhan vien (1: Lap Trinh Vien, 2: Kiem Chung Vien): ";
		cin >> loai;
		while (loai < 1 || loai > 2)
		{
			cout << "Khong hop le! Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemLapTrinhVien();
		else if (loai == 2)
			ThemKiemChungVien();
	}
}

void QuanLyNhanVien::XuatDS() const
{
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		cout << i + 1 << ". ";
		dsNhanVien[i]->Xuat();
		cout << "\t| Loai: " << (dsNhanVien[i]->loai == NhanVien::LOAI::CODER ? "Lap Trinh Vien" : "Kiem Chung Vien") << endl;
	}
}

int QuanLyNhanVien::TinhLuongTrungBinhCuaCacNhanVien() const
{
	int tongLuong = 0;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		tongLuong += dsNhanVien[i]->TinhLuong();
	}
	return dsNhanVien.empty() ? 0 : tongLuong / dsNhanVien.size();
}

void QuanLyNhanVien::XuatDanhSachNhanVienLuongThapHonLuongTrungBinh() const
{
	int luongTB = TinhLuongTrungBinhCuaCacNhanVien();
	cout << "Danh sach nhan vien co luong thap hon luong trung binh (" << luongTB << "):\n";
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (dsNhanVien[i]->TinhLuong() < luongTB)
		{
			cout << i + 1 << ". ";
			dsNhanVien[i]->Xuat();
			cout << "\t| Luong: " << dsNhanVien[i]->TinhLuong() << endl;
		}
	}
}

void QuanLyNhanVien::XuatNhanVienCoLuongCaoNhat() const
{
	if (dsNhanVien.size() == 0)
	{
		cout << "Danh sach nhan vien rong!";
		return;
	}
	vector<NhanVien*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (res.size() == 0 || dsNhanVien[i]->getLuong() > res[0]->getLuong())
		{
			res.clear();
			res.push_back(dsNhanVien[i]);
		}
		else if (dsNhanVien[i]->getLuong() == res[0]->getLuong())
		{
			res.push_back(dsNhanVien[i]);
		}
	}
	
	// Xuat ra ne
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void QuanLyNhanVien::XuatNhanVienCoLuongThapNhat() const
{
	if (dsNhanVien.size() == 0)
	{
		cout << "Danh sach nhan vien rong!";
		return;
	}
	vector<NhanVien*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (res.size() == 0 || dsNhanVien[i]->getLuong() < res[0]->getLuong())
		{
			res.clear();
			res.push_back(dsNhanVien[i]);
		}
		else if (dsNhanVien[i]->getLuong() == res[0]->getLuong())
		{
			res.push_back(dsNhanVien[i]);
		}
	}

	// Xuat ra ne
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void QuanLyNhanVien::XuatLapTrinhVienCoLuongCaoNhat() const
{
	vector<NhanVien*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (dsNhanVien[i]->loai == NhanVien::CODER)
		{
			if (res.size() == 0 || dsNhanVien[i]->getLuong() > res[0]->getLuong())
			{
				res.clear();
				res.push_back((LapTrinhVien*)dsNhanVien[i]);
			}
			else if (dsNhanVien[i]->getLuong() == res[0]->getLuong())
			{
				res.push_back((LapTrinhVien*)dsNhanVien[i]);
			}
		}
	}

	if (res.size() == 0)
	{
		cout << "Danh sach rong!"; 
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}

void QuanLyNhanVien::XuatKiemChungVienCoLuongThapNhat() const
{
	vector<NhanVien*> res;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (dsNhanVien[i]->loai == NhanVien::TESTER)
		{
			if (res.size() == 0 || dsNhanVien[i]->getLuong() < res[0]->getLuong())
			{
				res.clear();
				res.push_back((KiemChungVien*)dsNhanVien[i]);
			}
			else if (dsNhanVien[i]->getLuong() == res[0]->getLuong())
			{
				res.push_back((KiemChungVien*)dsNhanVien[i]);
			}
		}
	}

	if (res.size() == 0)
	{
		cout << "Danh sach rong!";
		return;
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << i + 1 << ". ";
		res[i]->Xuat();
		cout << endl;
	}
}
