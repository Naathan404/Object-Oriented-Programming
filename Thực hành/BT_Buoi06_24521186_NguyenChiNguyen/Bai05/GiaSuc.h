// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;

#pragma once
class GiaSuc
{
protected:

public:
	enum LOAI
	{
		BO,
		CUU,
		DE
	};
	LOAI loai;

	GiaSuc() { loai = BO; }
	virtual void Keu() const = 0;
	virtual int SinhCon() const = 0;
	virtual float ChoSua() const = 0;
};

