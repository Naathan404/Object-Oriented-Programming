// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cNVSanXuat.h"

cNVSanXuat::cNVSanXuat(string ht, cDate ns, int l, int lcb, int sosp) : cNhanVien(ht, ns, l)
{
	luongCoBan = lcb;
	soSanPham = sosp;
	loai = SAN_XUAT;
}

int cNVSanXuat::getLuongCoBan() const
{
	return luongCoBan;
}
int cNVSanXuat::getSoSanPham() const
{
	return soSanPham;
}
void cNVSanXuat::setLuongCoBan(int lcb)
{
	luongCoBan = lcb;
}
void cNVSanXuat::setSoSanPham(int sosp)
{
	soSanPham = sosp;
}

void cNVSanXuat::Nhap()
{
	cNhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> luongCoBan;
	cout << "Nhap so san pham: ";
	cin >> soSanPham;
	luong = TinhLuong();
}

void cNVSanXuat::Xuat() const
{
	cNhanVien::Xuat();
	cout << " | Luong co ban: " << luongCoBan;
	cout << " | So san pham: " << soSanPham;
	cout << " | Luong: " << luong;
}

int cNVSanXuat::TinhLuong()
{
	return luongCoBan + soSanPham * 5000;
}