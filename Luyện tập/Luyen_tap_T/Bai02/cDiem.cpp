#include "cDiem.h"

void cDiem::setHoangDo(float x)
{
	fHoanhDo = x;
}

void cDiem::setTungDo(float y)
{
	fTungDo = y;
}

float cDiem::getHoanhDo()
{
	return fHoanhDo;
}

float cDiem::getTungDo()
{
	return fTungDo;
}

void cDiem::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> fHoanhDo;
	cout << "Nhap tung do: ";
	cin >> fTungDo;
}

void cDiem::Xuat()
{
	cout << "Toa do la (" << fHoanhDo << ", " << fTungDo << ")" << endl;
}

void cDiem::TinhTien(float offsetX, float offsetY)
{
	fHoanhDo += offsetX;
	fTungDo += offsetY;
}