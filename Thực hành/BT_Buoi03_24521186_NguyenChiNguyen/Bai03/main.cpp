// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDSPhanSo.h"
#include "iostream"
using namespace std;

int main()
{
	cDSPhanSo ds;
	// Minh hoa nhap/xuat
	ds.Nhap();
	cout << "Danh sach phan so da nhap la: ";
	ds.Xuat();
	// Minh hoa ham tinh tong
	cout << "\nTong cac phan so cua danh sach la: ";
	ds.TinhTongCacPhanSo().Xuat();
	// Minh hoa cac ham tim kiem
	cout << "\nPhan so lon nhat la: ";
	ds.TimPhanSoLonNhat().Xuat();
	cout << "\nPhan so nho nhat la: ";
	ds.TimPhanSoNhoNhat().Xuat();
	cout << "\nPhan so co tu so la so nguyen to lon nhat la (neu khong co tra ve -1): ";
	ds.TimPhanSoCoTuNguyenToLonNhat().Xuat();
	// Minh hoa cac ham sap xep
	cout << "\nDS da sap xep tang dan: ";
	ds.SapXep(true);
	ds.Xuat();
	cout << "\nDS da sap xep giam dan: ";
	ds.SapXep(false);
	ds.Xuat();

	return 0;
}