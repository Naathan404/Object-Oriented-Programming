// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSVCaoDang.h"

cSVCaoDang::cSVCaoDang(int mssv, string hoTen, string diaChi, unsigned char soTC, float dtb, float diemTN) 
	: cSinhVien(mssv, hoTen, diaChi, soTC, dtb)
{
	fDiemTN = diemTN;
}

void cSVCaoDang::Nhap()
{
	cSinhVien::Nhap();
	cout << "Nhap diem tot nghiep: ";
	cin >> fDiemTN;
}

void cSVCaoDang::Xuat() const
{
	cSinhVien::Xuat();
	cout << " | Diem TN: " << fDiemTN;
	cout << endl;
}

bool cSVCaoDang::XetTotNghiep() const
{
	return (iTongTC >= 110 && fDiemTB >= 5.0 && fDiemTN >= 5.0);
}