// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once
#include "GiaSuc.h"
class De : public GiaSuc
{
private:

public:
	De() { loai = DE; }
	void Keu() const override;
	int SinhCon() const override;
	float ChoSua() const override;
};

