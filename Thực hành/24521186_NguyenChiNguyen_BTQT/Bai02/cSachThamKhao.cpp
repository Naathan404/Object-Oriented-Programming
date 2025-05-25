//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2


#include "cSachThamKhao.h"

cSachThamKhao::cSachThamKhao(string ma, string ten, string nxb, int sl, int gia, int thue)
{
	sMa = ma;
	sTen = ten;
	sNXB = nxb;
	iSoLuong = sl;
	iDonGia = gia;
	iThue = thue;
}

string cSachThamKhao::getMa() const
{
	return sMa;
}
string cSachThamKhao::getTen() const
{
	return sTen;
}
string cSachThamKhao::getNXB() const
{
	return sNXB;
}
int cSachThamKhao::getSoLuong() const
{
	return iSoLuong;
}
int cSachThamKhao::getDonGia() const
{
	return iDonGia;
}
int cSachThamKhao::getTienThue() const
{
	return iThue;
}

void cSachThamKhao::setMa(string s)
{
	sMa = s;
}
void cSachThamKhao::setTen(string s)
{
	sTen = s;
}
void cSachThamKhao::setNXB(string s)
{
	sNXB = s;
}
void cSachThamKhao::setSoLuong(int sl)
{
	iSoLuong = sl;
}
void cSachThamKhao::setDonGia(int gia)
{
	iDonGia = gia;
}
void cSachThamKhao::setTienThue(int thue)
{
	iThue = thue;
}

void cSachThamKhao::Nhap()
{
	cout << "Nhap ma sach: ";
	cin >> sMa;
	cout << "Nhap ten sach: ";
	cin.ignore();
	getline(cin, sTen);
	cout << "Nhap ten nha xuat ban: ";
	getline(cin, sNXB);
	cout << "Nhap so luong: ";
	cin >> iSoLuong;
	cout << "Nhap don gia: ";
	cin >> iDonGia;
	cout << "Nhap tien thue: ";
	cin >> iThue;
}

void cSachThamKhao::Xuat() const
{
	cout << "Ma: " << sMa;
	cout << " | Ten: " << sTen;
	cout << " | NXB: " << sNXB;
	cout << " | So luong: " << iSoLuong;
	cout << " | Don gia: " << iDonGia;
	cout << " | Tien thue: " << iThue;
}

int cSachThamKhao::TinhThanhTien() const
{
	return iSoLuong * iDonGia + iThue;
}

