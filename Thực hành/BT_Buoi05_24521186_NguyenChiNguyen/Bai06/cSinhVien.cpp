// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSinhVien.h"

cSinhVien::cSinhVien(int mssv, string hoTen, string diaChi, unsigned char soTC, float dtb)
{
	iMSSV = mssv;
	sHoTen = hoTen;
	sDiaChi = diaChi;
	iTongTC = soTC;
	fDiemTB = dtb;
}

void cSinhVien::Nhap()
{
	cout << "Nhap MSSV: ";
	cin >> iMSSV;
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, sHoTen);
	cout << "Nhap dia chi: ";
	getline(cin, sDiaChi);
	cout << "Nhap tong so tin chi: ";
	int temp;
	cin >> temp;
	iTongTC = (unsigned char)temp;
	cout << "Nhap diem trung binh: ";
	cin >> fDiemTB;
}

void cSinhVien::Xuat() const
{
	cout << "MSSV: " << iMSSV;
	cout << " | Ho ten: " << sHoTen;
	cout << " | Dia chi: " << sDiaChi;
	cout << " | Tong so TC: " << (int)iTongTC;
	cout << " | Diem TB: " << fDiemTB;
}