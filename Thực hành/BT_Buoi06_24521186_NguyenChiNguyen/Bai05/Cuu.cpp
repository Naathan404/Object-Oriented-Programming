// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "Cuu.h"
#include "random"

void Cuu::Keu() const
{
	cout << "Beeeeee-ee-e-e-e-e...";
}

int Cuu::SinhCon() const
{
	random_device rd;
	mt19937 gen(rd());
	discrete_distribution<> dist({ 30, 60, 10 });
	return dist(gen) + 1;
}

float Cuu::ChoSua() const
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dist(0.0, 5.0);
	return round(dist(gen) * 100) / 100.0;
}
