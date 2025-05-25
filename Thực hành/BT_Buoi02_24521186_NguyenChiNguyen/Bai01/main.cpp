// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	cPhanSo A(5), B, C;
	//A = 5;

	// Nhap hai phan so
	//cout << "Nhap phan so thu nhat: ";
	//A.Nhap();
	/*cout << "Nhap phan so thu hai: ";
	B.Nhap();*/

	// Tong, hieu, tich, thuong cua hai phan so
	cout << "Tong hai phan so la: ";
	C = A + A;
	C.RutGon();
	C.Xuat();
	cout << "Tong hai phan so la: ";
	C = A + cPhanSo(5);
	C.RutGon();
	C.Xuat();
	cout << "Tong hai phan so la: ";
	float c = 5.5 + (double)A;
	cout << c;
	cout << "Tong hai phan so la: ";
	C = 5 + 5;
	C.RutGon();
	C.Xuat();
	/*cout << "\nHieu hai phan so la: ";
	C = A - B;
	C.RutGon();
	C.Xuat();
	cout << "\nTich hai phan so la: ";
	C = A * B;
	C.RutGon();
	C.Xuat();
	cout << "\nThuong hai phan so la: ";
	C = A / B;
	C.RutGon();
	C.Xuat();*/
	cout << sqrt(cPhanSo(64, 16));

	return 0;
}