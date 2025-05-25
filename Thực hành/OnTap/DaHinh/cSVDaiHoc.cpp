// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSVDaiHoc.h"

cSVDaiHoc::cSVDaiHoc(int mssv, string hoTen, string diaChi, unsigned char soTC, float dtb, string tenLV, float diemLv)
	: cSinhVien(mssv, hoTen, diaChi, soTC, dtb)
{
	sTenLV = tenLV;
	fDiemLV = diemLv;
}

void cSVDaiHoc::Nhap()
{
	cSinhVien::Nhap();
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, sTenLV);
	cout << "Nhap diem luan van: ";
	cin >> fDiemLV;
}

void cSVDaiHoc::Xuat() const
{
	cSinhVien::Xuat();
	cout << " | Ten LV: " << sTenLV;
	cout << " | Diem LV: " << fDiemLV;
	cout << endl;
}

bool cSVDaiHoc::XetTotNghiep()
{
	return (iTongTC >= 145 && fDiemTB >= 5.0 && fDiemLV >= 5.0);
}
