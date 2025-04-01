// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once

class cThoiGian
{
private:
	short sGio, sPhut, sGiay;

public:
	cThoiGian(short = 0, short = 0, short = 0);
	short getGio() const;
	short getPhut() const;
	short getGiay() const;
	void setGio(short);
	void setPhut(short);
	void setGiay(short);

	void Nhap();
	void Xuat() const;
	void ThayDoiGiay(short);
	void ThayDoiPhut(short);
	void ThayDoiGio(short);
};	

