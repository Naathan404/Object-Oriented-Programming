// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <vector>
#include <iostream>
using namespace std;

#pragma once
class cVector
{
private:
	vector<float> ToaDo;

public:
	cVector(int = 0);

	void setSoChieu(int);
	int size() const;

	friend istream& operator>>(istream&, cVector&);
	friend ostream& operator<<(ostream&, const cVector&);
	// Cong vector voi mot vector => vector
	cVector operator+(cVector);
	// Tru vector cho mot vector => vector
	cVector operator-(cVector);
	// Nhan vector voi mot so thuc => vector
	cVector operator*(float);
	friend cVector operator*(float, cVector);
	// Nhan vector voi vector (tich vo huong) => so thuc
	int operator*(cVector);
	// Chia vector cho so thuc => vector
	cVector operator/(float);
	// Toan tu truy xuat []
	float &operator[](int);
	float operator[](int) const;
};

