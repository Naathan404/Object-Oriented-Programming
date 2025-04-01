// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once
class cTools
{
public:

	static bool KiemTraNgayHopLe(int iNgay, int iThang, int iNam)
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
};

