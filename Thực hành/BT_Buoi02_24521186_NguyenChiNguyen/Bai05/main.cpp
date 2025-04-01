// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cDate.h"
#include "cTools.h"
#include <iostream>
using namespace std;

int main()
{
	int iNgay, iThang, iNam;
	cout << "Nhap ngay thang nam: ";
	cin >> iNgay >> iThang >> iNam;
	// Kiem tra ngay co hop le hay khong:
	// Neu hop le moi tao doi tuong cDate, con neu khong hop le yeu cau nhap lai
	while (!cTools::KiemTraNgayHopLe(iNgay, iThang, iNam))
	{
		cout << "Ngay khong hop le! Nhap lai! " << endl;
		cin >> iNgay >> iThang >> iNam;
	}

	// Tao doi tuong cDate
	cDate D(iNgay, iThang, iNam);
	
	cout << "Ngay da nhap la: ";
	D.Xuat();
	// Minh hoa ham KiemTraNamNhuan()
	if (D.KiemTraNamNhuan())
		cout << "\nNam nhuan!";
	else
		cout << "\nKhong phai nam nhuan!";

	// Minh hoa cac ham tang giam ngay/thang/nam va ham getThu()
	cout << "\nNgay hien tai la thu: " << D.getThu();
	// Truyen doi so am thi giam ngay, doi so duong thi tang ngay
	D.thayDoiNgay(10);
	cout << "\n10 ngay sau la thu: " << D.getThu() << " ngay ";
	D.Xuat();
	cout << "\nNgay ban dau la: ";
	D.thayDoiNgay(-10);
	D.Xuat();

	// Minh hoa cho set/get
	D.setNgay(1);
	D.setThang(1);
	D.setNam(1);
	cout << "\nNgay sau khi set lai la: " << D.getNgay() << "/" << D.getThang() << "/" << D.getNam();

	return 0;
}