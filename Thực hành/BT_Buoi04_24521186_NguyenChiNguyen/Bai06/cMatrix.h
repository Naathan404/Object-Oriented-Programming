// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cVector.h"
#include <vector>

#pragma once
class cMatrix
{
private:
	vector<cVector> Rows;

public:
	cMatrix(int = 0, int = 0);
	cMatrix(cVector, bool = true);

	int getSoHang() const;
	int getSoCot() const;
	
	friend istream& operator>>(istream&, cMatrix&);
	friend ostream& operator<<(ostream&, cMatrix);
	// Cong hai ma tran cung kich thuoc => ma tran cung kich thuoc
	cMatrix operator+(cMatrix);
	// Tru hai ma tran cung kich thuoc => ma tran cung kich thuoc
	cMatrix operator-(cMatrix);
	// Nhan ma tran voi mot so thuc mxn => ma tran mxn
	cMatrix operator*(float);
	// Nhan mot so thuc voi ma tran mxn => ma tran mxn
	friend cMatrix operator*(float, cMatrix);
	// Nhan ma tran mxn voi ma tran nxp => ma tran mxp
	cMatrix operator*(cMatrix);
	// Nhan ma tran mxn voi vector n chieu => vector m chieu
	friend cVector operator*(cMatrix, cVector);
	// Nhan mot vector m chieu voi mot ma tran mxn => vector n chieu
	friend cVector operator*(cVector, cMatrix);
	// Chia ma tran voi mot so thuc => ma tran
	cMatrix operator/(float);
};

