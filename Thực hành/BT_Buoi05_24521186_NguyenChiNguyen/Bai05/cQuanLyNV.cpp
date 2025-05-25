// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNV.h"

void cQuanLyNV::NhapDSNVSanXuat(int n)
{
	List_NVSanXuat.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap NV San Xuat " << i + 1 << ": " << endl;
		List_NVSanXuat[i].Nhap();
	}
}

void cQuanLyNV::NhapDSNVVanPhong(int n)
{
	List_NVVanPhong.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap NV Van Phong " << i + 1 << ": " << endl;
		List_NVVanPhong[i].Nhap();
	}
}

void cQuanLyNV::XuatDSNVSanXuat() const
{
	for (int i = 0; i < List_NVSanXuat.size(); i++)
	{
		cout << i + 1 << ". ";
		List_NVSanXuat[i].Xuat();
	}
}

void cQuanLyNV::XuatDSNVVanPhong() const
{
	for (int i = 0; i < List_NVVanPhong.size(); i++)
	{
		cout << i + 1 << ". ";
		List_NVVanPhong[i].Xuat();
	}
}

int cQuanLyNV::TinhTongLuong() const
{
	int iTong = 0;
	for (int i = 0; i < List_NVSanXuat.size(); i++)
		iTong += List_NVSanXuat[i].TinhLuong();
	for (int i = 0; i < List_NVVanPhong.size(); i++)
		iTong += List_NVVanPhong[i].TinhLuong();
	
	return iTong;
}
