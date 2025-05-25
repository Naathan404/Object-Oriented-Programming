// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once

class cDate
{
private:
	int iNgay, iThang, iNam;

public:
	// Constructors
	cDate();
	cDate(int, int, int);

	// Get/set function
	int getNgay() const;
	int getThang() const;
	int getNam() const;
	void setNgay(int);
	void setThang(int);
	void setNam(int);

	// Processing
	void Nhap();
	void Xuat() const;
	void thayDoiNgay(int);
	void thayDoiThang(int);
	void thayDoiNam(int);
	int getThu() const;
	bool KiemTraNamNhuan() const;
	bool KiemTraNgayHopLe() const;
};