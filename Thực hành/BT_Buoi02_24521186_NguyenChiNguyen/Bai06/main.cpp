// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "String.h"
#include <iostream>
using namespace std;

int main()
{
	String S1, S2(" da duoc noi voi chuoi nay!");

	cout << "Nhap chuoi S1: ";
	S1.Nhap();

	cout << "Chuoi S1 la: ";
	S1.Xuat();
	cout << "\nChuoi S2 la: ";
	S2.Xuat();

	cout << "\nChuoi S3 duoc noi tu chuoi S1 va S2 la: ";
	String S3(S1.Connect(S2));
	S3.Xuat();

	cout << "\nDo dai chuoi S3 la: ";
	cout << S3.Length();

	cout << "\nChuoi S3 in hoa: ";
	S3.ToUpper();
	S3.Xuat();
	cout << "\nChuoi S3 in thuong: ";
	S3.ToLower();
	S3.Xuat();

	cout << "\nChuoi S3 sau khi dao nguoc la: ";
	S3.Reverse();
	S3.Xuat();
	
	return 0;
}