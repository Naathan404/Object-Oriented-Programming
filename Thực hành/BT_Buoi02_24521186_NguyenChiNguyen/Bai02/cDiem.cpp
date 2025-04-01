// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDiem.h"
#include <iostream>
using namespace std;

cDiem::cDiem()
{
	fHoanhDo = 0;
	fTungDo = 0;
}

cDiem::cDiem(float x, float y)
{
	fHoanhDo = x;
	fTungDo = y;
}

void cDiem::setHoangDo(float x)
{
	fHoanhDo = x;
}

void cDiem::setTungDo(float y)
{
	fTungDo = y;
}

float cDiem::getHoanhDo() const
{
	return fHoanhDo;
}

float cDiem::getTungDo() const
{
	return fTungDo;
}

void cDiem::Nhap()
{
	cout << "Nhap toa do cua diem: ";
	cin >> fHoanhDo >> fTungDo;
}

void cDiem::Xuat() const
{
	cout << "(" << fHoanhDo << ", " << fTungDo << ")" << endl;
}

void cDiem::TinhTien(float offsetX, float offsetY)
{
	fHoanhDo += offsetX;
	fTungDo += offsetY;
}
