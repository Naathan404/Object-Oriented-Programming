// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSoPhuc.h"
#include <iostream>
using namespace std;


int main()
{
	cSoPhuc A, B, KQ;
	// Nhap hai so phuc
	cout << "Nhap so phuc A: ";
	A.Nhap();
	cout << "Nhap so phuc B: ";
	B.Nhap();

	// In ket qua cac phep toan cong - tru - nhan - chia 
	// Cong
	KQ = A.Cong(B);
	cout << "Tong hai so phuc: ";
	KQ.Xuat();
	// Tru
	KQ = A.Tru(B);
	cout << "\nHieu hai so phuc: ";
	KQ.Xuat();
	// Nhan 
	KQ = A.Nhan(B);
	cout << "\nTich hai so phuc: ";
	KQ.Xuat();
	// Chia
	KQ = A.Chia(B);
	cout << "\nThuong hai so phuc: ";
	KQ.Xuat();

	return 0;
}