#include "cDiem.h"

int main()
{
	cDiem A(1, 2), B;
	B.Nhap();
	A.Xuat();
	B.Xuat();
	cout << A.getHoanhDo() << " " << A.getTungDo() << endl;
	A.setHoangDo(9);
	A.setTungDo(9);
	cout << A.getHoanhDo() << " " << A.getTungDo() << endl;
	A.Xuat();
	A.TinhTien(91, -91);
	A.Xuat();

	return 0;
}