// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "KiemChungVien.h"

KiemChungVien::KiemChungVien(string ma, string ten, string em, int age, int sdt, int lcb, float loi)
	: NhanVien(ma, ten, em, age, sdt, lcb), soLoi(loi)
{
	loai = LOAI::TESTER;
}

void KiemChungVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so loi: ";
	cin >> soLoi;
	luong = TinhLuong();
}

void KiemChungVien::Xuat() const
{
	NhanVien::Xuat();
	cout << "\t| So loi: " << soLoi;
	cout << "\t| Luong: " << luong;
}

int KiemChungVien::TinhLuong() const
{
	return luongCB + soLoi * 50000;
}