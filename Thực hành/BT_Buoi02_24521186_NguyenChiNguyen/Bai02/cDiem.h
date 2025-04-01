// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once

class cDiem
{
private:
	float fHoanhDo, fTungDo;

public:
	// Ham thiet lap
	cDiem();
	cDiem(float, float);

	// Ham get/set
	void setHoangDo(float);
	void setTungDo(float);
	float getHoanhDo() const;
	float getTungDo() const;

	// Ham thanh phan
	void Nhap();
	void Xuat() const;
	void TinhTien(float, float);
};

