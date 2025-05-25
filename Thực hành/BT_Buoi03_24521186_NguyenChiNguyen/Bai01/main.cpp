// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "iostream"
#include "cTamGiac.h"

int main()
{
	cTamGiac ABC;
	cout << "Tam giac ABC khi vua khoi tao la: ";
	ABC.Xuat();
	cout << "Nhap lai toa do cac dinh cho tam giac ABC:\n";
	ABC.Nhap();
	cout << "Tam giac ABC thuoc loai " << ABC.KiemTraLoaiTamGiac();
	cout << "\nChu vi cua tam giac ABC la: " << ABC.TinhChuVi();
	cout << "\nDien tich cua tam giac ABC la: " << ABC.TinhDienTich();
	ABC.TinhTien(1, 1);
	cout << "\nTam giac ABC sau khi tinh tien moi truc 1 don vi la: ";
	ABC.Xuat();
	ABC.QuayGoc90Do(true);
	cout << "Toa do cac dinh tam giac ABC sau khi quay 90 do quanh goc toa do theo chieu kim dong ho la: ";
	ABC.Xuat();
	ABC.ThayDoiKichThuoc(2);
	cout << "Toa do cac dinh tam giac ABC sau khi phong to len 2 lan la: ";
	ABC.Xuat();
	cout << "Hinh ve cuoi cung cua tam giac ABC tren he truc toa do xOy la: ";
	ABC.Ve();

	return 0;
}