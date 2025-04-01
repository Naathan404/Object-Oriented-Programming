// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cThoiGian.h"
#include <iostream>
using namespace std;

// Ham thiet lap - Constructor
cThoiGian::cThoiGian(short gio, short phut, short giay)
{
	setGio(gio);
	setPhut(phut);
	setGiay(giay);
}


// Cac ham thay doi get/set
short cThoiGian::getGio() const
{
	return sGio;
}

short cThoiGian::getPhut() const
{
	return sPhut;
}

short cThoiGian::getGiay() const
{
	return sGiay;
}

void cThoiGian::setGio(short gio)
{
	sGio = (gio >= 0) ? gio : 0;
}

void cThoiGian::setPhut(short phut)
{
	sPhut = (phut >= 0 && phut < 60) ? phut : 0;
}

void cThoiGian::setGiay(short giay)
{
	sGiay = (giay >= 0 && giay < 60) ? giay : 0;
}

// Cac ham xu li yeu cau
void cThoiGian::Nhap()
{
	cout << "Nhap gio: ";
	cin >> sGio;
	cout << "Nhap phut: ";
	cin >> sPhut;
	cout << "Nhap giay: ";
	cin >> sGiay;
	while ((sPhut < 0 || sPhut > 59) || (sGiay < 0 || sGiay > 59))
	{
		cout << "Du lieu nhap vao khong hop le! Vui long nhap lai: \n";
		cout << "Nhap gio: ";
		cin >> sGio;
		cout << "Nhap phut: ";
		cin >> sPhut;
		cout << "Nhap giay: ";
		cin >> sGiay;
	}
}

void cThoiGian::Xuat() const
{
	cout << sGio << " gio " << sPhut << " phut " << sGiay << " giay";
}

void cThoiGian::ThayDoiGiay(short soGiay)
{
	sGiay += soGiay;
	if(soGiay >= 0)
	{		while (sGiay > 59)
		{
			sGiay -= 60;
			sPhut += 1;
		}
		while (sPhut > 59)
		{
			sPhut -= 60;
			sGio += 1;
		}
	}
	else
	{
		while (sGiay < 0)
		{
			sGiay += 60;
			sPhut -= 1;
		}
		while (sPhut < 0)
		{
			sPhut += 60;
			sGio -= 1;
		}
	}
}

void cThoiGian::ThayDoiPhut(short soPhut)
{
	ThayDoiGiay(soPhut * 60);
}

void cThoiGian::ThayDoiGio(short soGio)
{
	ThayDoiGiay(soGio * 3600);
}
