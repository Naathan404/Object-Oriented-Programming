// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyChuyenXe.h"

void cQuanLyChuyenXe::ThemChuyenXeNoiThanh()
{
	cChuyenXeNoiThanh temp;
	temp.Nhap();
	DSXeNoiThanh.push_back(temp);
}

void cQuanLyChuyenXe::ThemChuyenXeNgoaiThanh()
{
	cChuyenXeNgoaiThanh temp;
	temp.Nhap();
	DSXeNgoaiThanh.push_back(temp);
}

void cQuanLyChuyenXe::NhapDSNoiThanh(int n)
{
	DSXeNoiThanh.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap chuyen xe thu " << i + 1 << ": \n";
		DSXeNoiThanh[i].Nhap();
	}
}

void cQuanLyChuyenXe::NhapDSNgoaiThanh(int n)
{
	DSXeNgoaiThanh.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap chuyen xe thu " << i + 1 << ": \n";
		DSXeNgoaiThanh[i].Nhap();
	}
}

void cQuanLyChuyenXe::XuatDS() const
{
	cout << "Danh sach cac chuyen xe noi thanh: \n";
	for (int i = 0; i < DSXeNoiThanh.size(); i++)
	{
		cout << i + 1 << ". ";
		DSXeNoiThanh[i].Xuat();
	}
	cout << "Danh sach cac chuyen xe ngoai thanh: \n";
	for (int i = 0; i < DSXeNgoaiThanh.size(); i++)
	{
		cout << i + 1 << ". ";
		DSXeNgoaiThanh[i].Xuat();
	}
}

int cQuanLyChuyenXe::TinhTongDoanhThu() const
{
	return TinhTongDoanhThuNoiThanh() + TinhTongDoanhThuNgoaiThanh();
}

int cQuanLyChuyenXe::TinhTongDoanhThuNoiThanh() const
{
	int iTong = 0;
	for (auto x : DSXeNoiThanh)
		iTong += x.getDoanhThu();
	return iTong;
}

int cQuanLyChuyenXe::TinhTongDoanhThuNgoaiThanh() const
{
	int iTong = 0;
	for (auto x : DSXeNgoaiThanh)
		iTong += x.getDoanhThu();
	return iTong;
}
