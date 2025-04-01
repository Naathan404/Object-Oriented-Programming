// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "Vehicle.h"
#include <iomanip>
#include <locale>

Vehicle::Vehicle(string owner, string type, float value, int capacity)
{
	sOwner = owner;
	sType = type;
	fValue = value;
	iCapacity = capacity;
}

string Vehicle::getOwner() const
{
	return sOwner;
}

string Vehicle::getType() const
{
	return sType;
}

float Vehicle::getValue() const
{
	return fValue;
}

int Vehicle::getCapacity() const
{
	return iCapacity;
}

void Vehicle::setOwner(string owner)
{
	sOwner = owner;
}

void Vehicle::setType(string type)
{
	sType = type;
}

void Vehicle::setValue(float value)
{
	fValue = (value >= 0) ? value : 0;
}

void Vehicle::setCapacity(int capacity)
{
	iCapacity = (capacity >= 0) ? capacity : 0;
}

void Vehicle::Nhap()
{
	cout << "Nhap chu so huu: ";
	getline(cin, sOwner);
	cout << "Nhap loai xe: ";
	getline(cin, sType);
	do
	{
		cout << "Nhap gia tri cua xe (gia tri >= 0): ";
		cin >> fValue;
	} while (fValue < 0);
	do
	{
		cout << "Nahp dung tich xi lanh (>= 0): ";
		cin >> iCapacity;
	} while (iCapacity < 0);
	cin.ignore();
}

void Vehicle::Xuat() const
{
	cout << "\n=============================================\n";
	cout << "Ten chu so huu: " << sOwner;
	cout << "\nLoai xe: " << sType;
	cout.imbue(locale(""));
	cout << "\nGia tri cua xe: " << fixed << setprecision(2) << fValue << " VND";
	cout << "\nDung tich xi lanh: " << iCapacity << "cc";
	cout << "\nTien thue truoc ba cua xe: " << TinhTienThueTruocBa() << " VND";
}

float Vehicle::TinhTienThueTruocBa() const
{
	if (iCapacity < 100)
		return 0.01 * fValue;
	else if (iCapacity >= 100 && iCapacity <= 200)
		return 0.03 * fValue;
	else
		return 0.05 * fValue;
}

