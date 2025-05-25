// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"

// Ham kiem tra nam truyen vao co phai nam nhuan hay khong
bool isLeapYear(int y)
{
	return (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0));
}

// Constructors
cDate::cDate(int d, int m, int y)
{
	iNgay = d;
	iThang = m;
	iNam = y;
	HieuChinh();
}

// Cac ham gets/sets
int cDate::getNgay() const
{
	return iNgay;
}

int cDate::getThang() const
{
	return iThang;
}

int cDate::getNam() const
{
	return iNam;
}

void cDate::setNgay(int d)
{
	iNgay = d;
	HieuChinh();
}

void cDate::setThang(int m)
{
	iThang = m;
	HieuChinh();
}

void cDate::setNam(int y)
{
	iNam = y;
	HieuChinh();
}

// Operators
// Nhap
istream& operator>>(istream& is, cDate& d)
{
	cout << "Nhap ngay: ";
	is >> d.iNgay;
	cout << "Nhap thang: ";
	is >> d.iThang;
	cout << "Nhap nam: ";
	is >> d.iNam;
	return is;
}
// Xuat
ostream& operator<<(ostream& os, cDate d)
{
	os << d.iNgay << "/" << d.iThang << "/" << d.iNam;
	return os;
}
// Cong them mot so ngay
cDate cDate::operator+(int soNgay)
{
	while (soNgay--)
	{
		++(*this);
	}
	return *this;
}
// Tru di mot so ngay
cDate cDate::operator-(int soNgay)
{
	while (soNgay--)
	{
		--(*this);
	}
	return *this;
}
// Khoang cach giua hai cDate tinh bang ngay
int cDate::operator-(cDate d)
{
	// Tinh tong so ngay cua cDate thu nhat
	int tongNgay1 = iNgay - 1, tongNgay2 = d.iNgay - 1;;
	int ngayCuaThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (iThang >= 2 && KiemTraNamNhuan())
		tongNgay1 += 1;
	for (int i = 1; i < iNam; i++)
	{
		if (isLeapYear(i))
			tongNgay1 += 366;
		else
			tongNgay1 += 365;
	}
	for (int i = 1; i < iThang; i++)
		tongNgay1 += ngayCuaThang[i - 1];

	// Tinh tong so ngay cua cDate thu hai
	if (d.iThang >= 2 && d.KiemTraNamNhuan())
		tongNgay2 += 1;
	for (int i = 1; i < d.iNam; i++)
	{
		if (isLeapYear(i))
			tongNgay2 += 366;
		else
			tongNgay2 += 365;
	}
	for (int i = 1; i < d.iThang; i++)
		tongNgay2 += ngayCuaThang[i - 1];

	return abs(tongNgay1 - tongNgay2);
}

// Tang them 1 ngay
cDate& cDate::operator++()
{
	iNgay++;
	if (iThang == 2)
	{
		if (KiemTraNamNhuan() && iNgay > 29)
		{
			iNgay = 1;
			iThang++;
		}
		else if (!KiemTraNamNhuan() && iNgay > 28)
		{
			iNgay = 1;
			iThang++;
		}
	}
	else if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11))
	{
		if (iNgay > 30)
		{
			iNgay = 1;
			iThang++;
		}
	}
	else
	{
		if (iNgay > 31)
		{
			iNgay = 1;
			iThang++;
		}
	}
	if (iThang > 12)
	{
		iThang = 1;
		iNam++;
	}
	return *this;
}

cDate cDate::operator++(int)
{
	cDate d = *this;
	iNgay++;
	if (iThang == 2)
	{
		if (KiemTraNamNhuan() && iNgay > 29)
		{
			iNgay = 1;
			iThang++;
		}
		else if (!KiemTraNamNhuan() && iNgay > 28)
		{
			iNgay = 1;
			iThang++;
		}
	}
	else if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11))
	{
		if (iNgay > 30)
		{
			iNgay = 1;
			iThang++;
		}
	}
	else
	{
		if (iNgay > 31)
		{
			iNgay = 1;
			iThang++;
		}
	}
	if (iThang > 12)
	{
		iThang = 1;
		iNam++;
	}
	return d;
}

// Giam di mot ngay
cDate& cDate::operator--()
{
	iNgay--;
	if (iNgay < 1)
	{
		iThang--;
		if (iThang == 2)
		{
			if (KiemTraNamNhuan())
				iNgay = 29;
			else
				iNgay = 28;
		}
		else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
			iNgay = 30;
		else
			iNgay = 31;
	}
	if (iThang < 1)
	{
		iThang = 12;
		iNam--;
	}
	return *this;
}

cDate cDate::operator--(int)
{
	cDate d = *this;
	iNgay--;
	if (iNgay < 1)
	{
		iThang--;
		if (iThang == 2)
		{
			if (KiemTraNamNhuan())
				iNgay = 29;
			else
				iNgay = 28;
		}
		else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
			iNgay = 30;
		else
			iNgay = 31;
	}
	if (iThang < 1)
	{
		iThang = 12;
		iNam--;
	}
	return d;
}

// Cac ham ho tro
void cDate::HieuChinh()
{
	if (iThang == 2)
	{
		if ((KiemTraNamNhuan() && iNgay > 29) || (!KiemTraNamNhuan() && iNgay > 28))
			iNgay = 1;
	}
	else if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 12))
	{
		if (iNgay > 30)
			iNgay = 1;
	}
	else
	{
		if (iNgay > 31)
			iNgay = 1;
	}
	if (iNgay < 1)
		iNgay = 1;
	if (iThang < 1 || iThang > 12)
		iThang = 1;
	if (iNam < 1)
		iNam = 1;
}
bool cDate::KiemTraNamNhuan() const
{
	return (iNam % 400 == 0 || (iNam % 100 != 0 && iNam % 4 == 0));
}