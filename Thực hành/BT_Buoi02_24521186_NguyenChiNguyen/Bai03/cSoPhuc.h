// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once

class cSoPhuc
{
private:
	float fThuc, fAo;

public:
	// Ham thiet lap
	cSoPhuc();
	cSoPhuc(float, float);

	// Ham set/get
	float getThuc() const;
	float getAo() const;
	void setThuc(float);
	void setAo(float);

	// Cac ham thanh phan
	void Nhap();
	void Xuat() const;
	float DinhGiaTri() const;
	cSoPhuc Cong(cSoPhuc);
	cSoPhuc Tru(cSoPhuc);
	cSoPhuc Nhan(cSoPhuc);
	cSoPhuc Chia(cSoPhuc);
};
