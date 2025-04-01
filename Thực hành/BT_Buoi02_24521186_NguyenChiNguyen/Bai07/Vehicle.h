// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string.h>
#include <string>
#include <iostream>
using namespace std;

#pragma once
class Vehicle
{
private:
	string sOwner;
	string sType;
	float fValue;
	int iCapacity;

public: 
	Vehicle(string = "", string = "", float = 0, int = 0);

	string getOwner() const;
	string getType() const;
	float getValue() const;
	int getCapacity() const;

	void setOwner(string);
	void setType(string);
	void setValue(float);
	void setCapacity(int);

	void Nhap();
	void Xuat() const;
	float TinhTienThueTruocBa() const;

};

