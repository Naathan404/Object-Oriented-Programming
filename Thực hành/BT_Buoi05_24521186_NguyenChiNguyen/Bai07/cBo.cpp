// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cBo.h"
#include <random>

void cBo::Keu() const
{
	cout << "MoOoOoooOooo-oO--o";
}

int cBo::SinhCon() const
{
	random_device rd;
	mt19937 gen(rd());
	discrete_distribution<> dist({95, 4.9, 0.1});
	return dist(gen) + 1;
}

float cBo::ChoSua() const
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dist(0.0, 20.0);
	return round(dist(gen) * 100) / 100.0;
}
