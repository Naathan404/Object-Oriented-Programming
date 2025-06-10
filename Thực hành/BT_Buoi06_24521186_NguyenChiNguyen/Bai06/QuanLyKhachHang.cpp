// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyKhachHang.h"

void QuanLyKhachHang::ThemKHLoaiA(ifstream& in)
{
	KhachHang* kh = new KHLoaiA();
	kh->Nhap(in);
	dsKhachHang.push_back(kh);
}
void QuanLyKhachHang::ThemKHLoaiB(ifstream& in)
{
	KhachHang* kh = new KHLoaiB();
	kh->Nhap(in);
	dsKhachHang.push_back(kh);
}
void QuanLyKhachHang::ThemKHLoaiC(ifstream& in)
{
	KhachHang* kh = new KHLoaiC();
	kh->Nhap(in);
	dsKhachHang.push_back(kh);
}
void QuanLyKhachHang::NhapDS(int x, int y, int z, ifstream& in)
{
	for (int i = 0; i < x; i++)
		ThemKHLoaiA(in);
	for (int i = 0; i < y; i++)
		ThemKHLoaiB(in);
	for (int i = 0; i < z; i++)
		ThemKHLoaiC(in);
}
void QuanLyKhachHang::XuatDS(ofstream& out) const
{
	for (int i = 0; i < dsKhachHang.size(); i++)
	{
		dsKhachHang[i]->Xuat(out);
		out << "\n---------------------------\n";
	}
}

int QuanLyKhachHang::TinhTongSoTienThuDuoc() const
{
	int tongTien = 0;
	for (int i = 0; i < dsKhachHang.size(); i++)
	{
		tongTien += dsKhachHang[i]->TinhTien();
	}
	return tongTien;
}
