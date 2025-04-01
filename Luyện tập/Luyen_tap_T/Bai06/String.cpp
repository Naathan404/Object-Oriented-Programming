//Cài đặt lớp String để biểu diễn khái niệm chuỗi ký tự với các phương thức thiết 
//lập và hủy bỏ, các hàm thành phần xác định chiều dài chuỗi, nối hai chuỗi, đảo
//chuỗi, chuyển chuỗi hoa / thường, nhập và xuất chuỗi.Viết chương trình minh họa
//các chức năng đã cài đặt của lớp String.

#include "String.h"
#include <iostream>

// Dinh nghia cac ham thiet lap va ham pha huy
String::String()
{
	size = 0;
	str = nullptr;
}

String::String(int n)
{
	size = n;
	str = new char[size];
}

String::String(int n, char *ch)
{
	size = n;
	str = new char[size];
	for (int i = 0; i < n; i++)
	{
		str[i] = ch[i];
	}
}

// Dinh nghia ham pha huy
String::~String()
{
	delete[] str;
}

// Dinh nghia cac ham thanh phan
int String::Length()
{ 
	return size; 
}

void Connect(char* ch)
{

}