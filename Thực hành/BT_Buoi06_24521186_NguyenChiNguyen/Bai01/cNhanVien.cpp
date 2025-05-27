// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVien.h"

cNhanVien::cNhanVien(string ht, cDate ns, int l)
{
	hoTen = ht;
	ngaySinh = ns;
	luong = l;
	loai = MAC_DINH;
}

string cNhanVien::getHoTen() const
{
	return hoTen;
}
cDate cNhanVien::getNgaySinh() const
{
	return ngaySinh;
}
int cNhanVien::getLuong() const
{
	return luong;
}
void cNhanVien::setHoTen(string ht)
{
	hoTen = ht;
}
void cNhanVien::setNgaySinh(int ngay, int thang, int nam)
{
	ngaySinh.setNgay(ngay);
	ngaySinh.setThang(thang);
	ngaySinh.setNam(nam);
}
void cNhanVien::setLuong(int l)
{
	luong = l;
}

void cNhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh (dd mm yy): ";
	ngaySinh.Nhap();
}

void cNhanVien::Xuat() const
{
	cout << "Ho ten: " << hoTen;
	cout << " | Ngay sinh: ";
	ngaySinh.Xuat();
}
