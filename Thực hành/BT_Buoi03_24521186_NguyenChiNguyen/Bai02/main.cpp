// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDaGiac.h"
#include <iostream>
using namespace std;

int main()
{
	// NOTE::Phai nhap diem theo dung thu tu theo chieu kim hoac nguoc chieu kim dong ho thi dong code nay moi hoat dong
	// Minh hoa Ham thiet lap, nhap, xuat
	cDaGiac DaGiac;
	DaGiac.Nhap();
	cout << "Toa do cac dinh cua da giac vua nhap la: ";
	DaGiac.Xuat();
	// Minh hoa ham kiem tra tinh chat da giac va ham tinh chu vi, dien tich
	cout << "Da giac tren thuoc loai " << (DaGiac.KiemTraDeu() ? "da giac deu" : "da giac khong deu.");
	cout << "\nDa giac tren co hinh dang " << (DaGiac.KiemTraHinhDang() ? "da giac loi." : "da giac lom.");
	cout << "\nChu vi cua da giac tren la: " << DaGiac.TinhChuVi();
	cout << "\nDien tich cua da giac tren la: " << DaGiac.TinhDienTich();
	// Minh hoa cac ham thay doi toa do cac dinh cua da giac
	DaGiac.TinhTien(1, 1);
	cout << "\nDa giac sau khi tinh tien moi truc tang them 1 don vi la: ";
	DaGiac.Xuat();
	DaGiac.QuayGoc90Do(true);
	cout << "Toa do cac dinh cua da giac sau khi quay 90 do quanh goc toa do theo chieu kim dong ho la: ";
	DaGiac.Xuat();
	DaGiac.ThayDoiKichThuoc(2);
	cout << "Toa do cac dinh cua da giac sau khi phong to len 2 lan la: ";
	DaGiac.Xuat();
	// Ve da giac
	cout << "Hinh ve cuoi cung cua da giac tren qua cac lan bien doi tren he truc toa do xOy la: ";
	DaGiac.Ve();

}