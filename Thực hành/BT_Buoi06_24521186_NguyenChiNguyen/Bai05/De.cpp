// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "De.h"
#include <random>

void De::Keu() const
{
	cout << "MeEeEeEe-E-e-E-eee";
}

int De::SinhCon() const
{
	random_device rd;
	mt19937 gen(rd());
	discrete_distribution<> dist({ 50, 30, 20 });
	return dist(gen) + 1;
}

float De::ChoSua() const
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dist(0.0, 10.0);
	return round(dist(gen) * 100) / 100.0;
}
