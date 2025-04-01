// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;

struct Date
{
	int iNgay, iThang, iNam;
};

// Khai bao nguyen mau cac ham
void NhapNgay(Date&);
bool KiemTraNgayHopLe(Date);
bool KiemTraNamNhuan(int);
void TimThuTrongTuan(Date);

// Ham main
int main()
{
	Date Time;
	NhapNgay(Time);
	if (KiemTraNgayHopLe(Time))
		TimThuTrongTuan(Time);
	else
		cout << "Thong tin khong hop le";
	return 0;
}

// Dinh nghia cac ham
void NhapNgay(Date& NgayHienTai)
{
	cout << "Nhap ngay: ";
	cin >> NgayHienTai.iNgay;
	cout << "Nhap thang: ";
	cin >> NgayHienTai.iThang;
	cout << "Nhap nam: ";
	cin >> NgayHienTai.iNam;
}

bool KiemTraNgayHopLe(Date Time)
{
	if (Time.iNam <= 0 || Time.iThang <= 0 || Time.iThang > 12 || Time.iNgay <= 0 || Time.iNgay > 31)
		return false;
	else if (Time.iThang == 2)
	{
		if (KiemTraNamNhuan(Time.iNam) && Time.iNgay > 29)
			return false;
		else if (!KiemTraNamNhuan(Time.iNam) && Time.iNgay > 28)
			return false;
	}
	else if ((Time.iThang == 4 || Time.iThang == 6 || Time.iThang == 9 || Time.iThang == 11) && Time.iNgay > 30)
		return false;
}

bool KiemTraNamNhuan(int iNam)
{
	return ((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0));
}

void TimThuTrongTuan(Date Time)
{
	// Lay ngay dau tien cua Cong Nguyen (thu hai) lam moc, tinh tong so ngay ke tu moc den ngay hien tai
	int TongNgay = Time.iNgay - 1;
	for (int i = 1; i < Time.iNam; ++i)
	{
		if (KiemTraNamNhuan(i))
			TongNgay += 366;
		else
			TongNgay += 365;
	}
	for (int i = 1; i < Time.iThang; ++i)
	{
		if (i == 2)
		{
			if (KiemTraNamNhuan(Time.iNam))
				TongNgay += 29;
			else
				TongNgay += 28;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			TongNgay += 30;
		else
			TongNgay += 31;
	}

	TongNgay %= 7;
	string Thu[7] = { "thu Hai", "thu Ba", "thu Tu", "thu Nam", "thu Sau", "thu Bay", "Chu Nhat"};
	cout << "Ngay " << Time.iNgay << "/" << Time.iThang << "/" << Time.iNam << " la " << Thu[TongNgay];
}