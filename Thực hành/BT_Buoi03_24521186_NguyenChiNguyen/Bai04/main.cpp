// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cArray.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cout << "Nhap so phan tu mang muon khoi tao: ";
	cin >> n;
	cArray<int> arr(n);
	cout << "Da khoi tao mang gom " << n << " so ngau nhien: ";
	arr.Xuat();
	cout << "\nNhap gia tri muon tim so lan xuat hien trong mang: ";
	cin >> x;
	cout << "So lan xuat hien cua " << x << " la: " << arr.DemSoLanXuatHien(x) << endl;
	cout << (arr.KiemTraMangTangDan() ? "Day la mang tang dan" : "Day khong phai mang tang dan");
	cout << "\nSo le nho nhat la (0 neu khong co so le): " << arr.TimLeNhoNhat();
	cout << "\nSo nguyen to lon nhat la (0 neu khong co so nguyen to): " << arr.TimSoNguyenoToLonNhat();
	cout << "\nMang sau khi duoc sap xep tang dan: ";
	arr.SapXep(true);
	arr.Xuat();
	cout << "\nMang sau khi duoc sap xep giam dan: ";
	arr.SapXep(false);
	arr.Xuat();

	return 0;
}