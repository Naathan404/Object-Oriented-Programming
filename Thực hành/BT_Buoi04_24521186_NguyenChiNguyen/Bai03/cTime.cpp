// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cTime.h"
#include <iomanip>
#include <windows.h>

cTime::cTime(int gio, int phut, int giay)
{
	setGio(gio);
	setPhut(phut);
	setGiay(giay);
}

// Cac ham gets/sets
int cTime::getGio() const
{
	return iGio;
}
int cTime::getPhut() const
{
	return iPhut;
}
int cTime::getGiay() const
{
	return iGiay;
}
void cTime::setGio(int gio)
{
	if (gio < 0 || gio > 23)
		iGio = 0;
	iGio = gio;
}
void cTime::setPhut(int phut)
{
	if (phut < 0 || phut > 59)
		iPhut = 0;
	iPhut = phut;
}
void cTime::setGiay(int giay)
{
	if (giay < 0 || giay > 59)
		iGiay = 0;
	iGiay = giay;
}

// Xu ly in dong ho ra man hinh
void DiChuyenConTroDen(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int LayChieuRongManHinh()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int soCot;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	soCot = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	return soCot;
}
void cTime::InDongHo()
{
	while (true)
	{
		int iChieuRong = LayChieuRongManHinh();
		int iChieuDaiDongHo = 8;
		int iChieuDaiKhung = 2 + iChieuDaiDongHo;
		int ViTriInDongHo_x = iChieuRong - iChieuDaiKhung - 2;
		if (ViTriInDongHo_x < 0) ViTriInDongHo_x = 0;

		DiChuyenConTroDen(ViTriInDongHo_x, 0);
		cout << char(218);
		for (int i = 0; i < iChieuDaiDongHo; i++)
			cout << char(196);
		cout << char(191);

		DiChuyenConTroDen(ViTriInDongHo_x, 1);
		cout << char(179);
		cout << *this;
		cout << char(179);

		DiChuyenConTroDen(ViTriInDongHo_x, 2);
		cout << char(192);
		for (int i = 0; i < iChieuDaiDongHo; i++)
			cout << char(196);
		cout << char(217);

		++(*this);
		Sleep(1000);
	}
}

// Operators
cTime cTime::operator+(int soGiay)
{
	iGiay += soGiay;
	while (iGiay > 59)
	{
		iGiay -= 60;
		iPhut += 1;
	}
	while (iPhut > 59)
	{
		iPhut -= 60;
		iGio += 1;
	}
	return *this;
}

cTime cTime::operator-(int soGiay)
{
	iGiay -= soGiay;
	while (iGiay < 0)
	{
		iGiay += 60;
		iPhut -= 1;
	}
	while (iPhut < 0)
	{
		iPhut += 60;
		iGio -= 1;
	}
	if (iGio < 0)
		iGio = 0;
	return *this;
}

cTime& cTime::operator++()
{
	iGiay++;
	if (iGiay > 59)
	{
		iGiay = 0;
		iPhut++;
	}
	if (iPhut > 59)
	{
		iPhut = 0;
		iGio++;
	}
	return *this;
}

cTime cTime::operator++(int)
{
	cTime temp = *this;
	iGiay++;
	if (iGiay > 59)
	{
		iGiay = 0;
		iPhut++;
	}
	if (iPhut > 59)
	{
		iPhut = 0;
		iGio++;
	}
	return temp;
}

cTime& cTime::operator--()
{
	iGiay--;
	while (iGiay < 0)
	{
		iGiay += 60;
		iPhut -= 1;
	}
	while (iPhut < 0)
	{
		iPhut += 60;
		iGio -= 1;
	}
	if (iGio < 0)
		iGio = 0;
	return *this;
}

cTime cTime::operator--(int)
{
	cTime temp = *this;
	iGiay--;
	while (iGiay < 0)
	{
		iGiay += 60;
		iPhut -= 1;
	}
	while (iPhut < 0)
	{
		iPhut += 60;
		iGio -= 1;
	}
	if (iGio < 0)
		iGio = 0;
	return temp;
}

istream& operator>>(istream& is, cTime& time)
{
	cout << "Nhap gio: ";
	is >> time.iGio;
	cout << "Nhap phut: ";
	is >> time.iPhut;
	cout << "Nhap giay: ";
	is >> time.iGiay;
	while ((time.iGio < 0 || time.iGio > 23) || (time.iPhut < 0 || time.iPhut > 59) || (time.iGiay < 0 || time.iGiay > 59))
	{
		cout << "Thoi gian khong hop le! Hay nhap lai mot thoi gian khac: \n";
		cout << "Nhap gio: ";
		is >> time.iGio;
		cout << "Nhap phut: ";
		is >> time.iPhut;
		cout << "Nhap giay: ";
		is >> time.iGiay;
	}
	return is;
}

ostream& operator<<(ostream& os, cTime time)
{
	os << setw(2) << setfill('0') << time.iGio << ":"
		<< setw(2) << setfill('0') << time.iPhut << ":"
		<< setw(2) << setfill('0') << time.iGiay;
	return os;
}