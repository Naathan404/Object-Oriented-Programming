// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cCandidate.h"

void cCandidate::Nhap()
{
	cout << "\nNhap ma thi sinh (viet lien): ";
	cin >> sMaTS;
	cin.ignore();
	cout << "Nhap ten thi sinh: ";
	getline(cin, sName);
	cout << "Nhap ngay thang nam sinh (cach nhau 1 khoang trang): ";
	ngaySinh.Nhap();
	cout << "Nhap diem Toan: ";
	cin >> fDiemToan;
	while (fDiemToan < 0 || fDiemToan > 10)
	{
		cout << "Diem Toan khong hop le, vui long nhap lai: ";
		cin >> fDiemToan;
	}
	cout << "Nhap diem Van: ";
	cin >> fDiemVan;
	while (fDiemVan < 0 || fDiemVan > 10)
	{
		cout << "Diem Van khong hop le, vui long nhap lai: ";
		cin >> fDiemVan;
	}
	cout << "Nhap diem Anh: ";
	cin >> fDiemAnh;
	while (fDiemAnh < 0 || fDiemAnh > 10)
	{
		cout << "Diem Anh khong hop le, vui long nhap lai: ";
		cin >> fDiemAnh;
	}
}

void cCandidate::Xuat() const
{
	cout << "Ma thi sinh: " << sMaTS;
	cout << " | Ho va ten thi sinh: " << sName;
	cout << " | Ngay sinh: "; ngaySinh.Xuat();
	cout << " | Diem Toan: " << fDiemToan;
	cout << " | Diem Van: " << fDiemVan;
	cout << " | Diem Anh: " << fDiemAnh;
}

float cCandidate::TinhTongDiem() const
{
	return fDiemToan + fDiemVan + fDiemAnh;
}