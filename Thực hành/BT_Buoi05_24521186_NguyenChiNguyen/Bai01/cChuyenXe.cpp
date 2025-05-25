// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXe.h"

cChuyenXe::cChuyenXe(int ms, string tentaixe, int soxe, int doanhthu)
{
	iMaSoChuyen = ms;
	sHoTenTaiXe = tentaixe;
	iSoXe = soxe;
	iDoanhThu = doanhthu;
}

void cChuyenXe::Nhap()
{
	cout << "Nhap ma so chuyen: ";
	cin >> iMaSoChuyen;
	cout << "Nhap ho va ten tai xe: ";
	cin.ignore();
	getline(cin, sHoTenTaiXe);
	cout << "Nhap so xe: ";
	cin >> iSoXe;
	cout << "Nhap doanh thu: ";
	cin >> iDoanhThu;
}

void cChuyenXe::Xuat() const
{
	cout << "Ma so chuyen: " << iMaSoChuyen;
	cout << " | Ho va ten tai xe: " << sHoTenTaiXe;
	cout << " | So xe: " << iSoXe;
	cout << " | Doanh thu: " << iDoanhThu;
}