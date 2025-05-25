// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cDaThuc.h"
#include <iostream>
using namespace std;


int main()
{
	int x;
	cDaThuc dathuc1, dathuc2;
	// Minh hoa nhap xuat
	cout << "##Nhap da thuc thu nhat: \n";
	dathuc1.Nhap();
	cout << "##Nhap da thuc thu hai: \n";
	dathuc2.Nhap();
	cout << "Da thuc thu nhat la: ";
	dathuc1.Xuat();
	cout << "\nDa thuc thu hai la: ";
	dathuc2.Xuat();

	// Minh hoa ham tinh gia tri bieu thuc
	cout << "\n##Nhap so thuc x can tinh gia tri bieu thuc: ";
	cin >> x;
	cout << "Gia tri cua bieu thuc thu nhat khi x = " << x << " la: " << dathuc1.TinhGiaTri(x);
	cout << "\nGia tri cua bieu thuc thu hai khi x = " << x << " la: " << dathuc2.TinhGiaTri(x);

	// Minh hoa cong, tru hai da thuc
	cDaThuc KQ;
	cout << "\n##Ket qua phep cong hai da thuc tren la: ";
	KQ = dathuc1 + dathuc2;
	KQ.Xuat();

	cout << "\n##Ket qua phep tru hai da thuc tren la: ";
	KQ = dathuc1 - dathuc2;
	KQ.Xuat();

	return 0;
}