// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"
#include <iostream>
using namespace std;

// Constructors
cDate::cDate()
{
	iNgay = 1;
	iThang = 1;
	iNam = 1;
}

cDate::cDate(int d, int m, int y) 
{
	iNgay = d;
	iThang = m;
	iNam = y;
}

bool cDate::KiemTraNgayHopLe() const
{
	bool laNamNhuan = (iNam % 400 == 0 || (iNam % 100 != 0 && iNam % 4 == 0));
	if (iNam < 1 || (iThang < 1 || iThang > 12) || (iNgay < 1 || iNgay > 31))
		return false;
	if (iThang == 2)
	{
		if (laNamNhuan && iNgay > 29)
			return false;
		if (!laNamNhuan && iNgay > 28)
			return false;
	}
	else if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) && iNgay > 30)
		return false;
	return true;
}

// Cac ham lay ngay/thang/nam, thay doi ngay/thang/nam
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
}

void cDate::setThang(int m)
{
	iThang = m;
}

void cDate::setNam(int y)
{
	iNam = y;
}


// Cac ham nhap/ xuat/ kiem tra nam nhuan
void cDate::Nhap()
{
	cin >> iNgay >> iThang >> iNam;
	while (!KiemTraNgayHopLe())
	{
		cout << "Ngay khong hop le. Vui long nhap lai: \n";
		cin >> iNgay >> iThang >> iNam;
	}
}

void cDate::Xuat() const
{
	cout << iNgay << "/" << iThang << "/" << iNam;
}
 
bool cDate::KiemTraNamNhuan() const
{
	return (iNam % 400 == 0 || (iNam % 100 != 0 && iNam % 4 == 0));
}

// Cac ham thay doi(tang/giam) ngay/thang/nam (doi so truyen vao am thi giam ngay, duong thi tang ngay)
void cDate::thayDoiNgay(int soNgay)
{
	if(soNgay >=  0)
	{
		while (soNgay--)
		{
			iNgay += 1;
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
		}
	}
	else if (soNgay < 0)
	{
		while (soNgay++)
		{
			iNgay -= 1;
			if (iNgay < 1)
			{
				iThang--;
				if (iThang == 2)
					if (KiemTraNamNhuan())
						iNgay = 29;
					else
						iNgay = 28;
				if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
					iNgay = 30;
				else
					iNgay = 31;
			}
			if (iThang < 1)
			{
				iThang = 12;
				iNam--;
			}
		}
	}
}

void cDate::thayDoiThang(int soThang)
{
	thayDoiNgay(soThang * 30);
}

void cDate::thayDoiNam(int soNam)
{
	thayDoiNgay(soNam * 365);
}

// Ham lay thu trong tuan
bool isLeapYear(int y)
{
	return (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0));
}

int cDate::getThu() const
{
	int tongNgay = iNgay - 1;
	if (iThang >= 2 && KiemTraNamNhuan())
		tongNgay += 1;
	int ngayCuaThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 1; i < iNam; i++)
	{
		if (isLeapYear(i))
			tongNgay += 366;
		else
			tongNgay += 365;
	}
	for (int i = 1; i < iThang; i++)
		tongNgay += ngayCuaThang[i-1];

	return (tongNgay % 7) + 2;
}