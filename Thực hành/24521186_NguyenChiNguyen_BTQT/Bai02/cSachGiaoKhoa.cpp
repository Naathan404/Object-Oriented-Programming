//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cSachGiaoKhoa.h"

cSachGiaoKhoa::cSachGiaoKhoa(string ma, string ten, string nxb, int sl, int gia, bool tt)
{
	sMa = ma;
	sTen = ten;
	sNXB = nxb;
	iSoLuong = sl;
	iDonGia = gia;
	bTinhTrang = tt;
}

string cSachGiaoKhoa::getMa() const
{
	return sMa;
}
string cSachGiaoKhoa::getTen() const
{
	return sTen;
}
string cSachGiaoKhoa::getNXB() const
{
	return sNXB;
}
int cSachGiaoKhoa::getSoLuong() const
{
	return iSoLuong;
}
int cSachGiaoKhoa::getDonGia() const
{
	return iDonGia;
}
bool cSachGiaoKhoa::getTinhTrang() const
{
	return bTinhTrang;
}

void cSachGiaoKhoa::setMa(string s)
{
	sMa = s;
}
void cSachGiaoKhoa::setTen(string s)
{
	sTen = s;
}
void cSachGiaoKhoa::setNXB(string s)
{
	sNXB = s;
}
void cSachGiaoKhoa::setSoLuong(int sl)
{
	iSoLuong = sl;
}
void cSachGiaoKhoa::setDonGia(int gia)
{
	iDonGia = gia;
}
void cSachGiaoKhoa::setTinhTrang(bool tt)
{
	bTinhTrang = tt;
}

void cSachGiaoKhoa::Nhap()
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
	cout << "Nhap tinh trang (0 : cu - 1 : moi): ";
	cin >> bTinhTrang;
}

void cSachGiaoKhoa::Xuat() const
{
	cout << "Ma: " << sMa;
	cout << " | Ten: " << sTen;
	cout << " | NXB: " << sNXB;
	cout << " | So luong: " << iSoLuong;
	cout << " | Don gia: " << iDonGia;
	cout << " | Tinh trang: " << (bTinhTrang ? "Con moi" : "Da cu");
}

int cSachGiaoKhoa::TinhThanhTien() const
{
	if (bTinhTrang)
		return iSoLuong * iDonGia;
	else
		return iSoLuong * iDonGia * 0.5;
}

