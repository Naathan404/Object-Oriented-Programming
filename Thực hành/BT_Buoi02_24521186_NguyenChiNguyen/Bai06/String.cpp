// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "String.h"
#include <iostream>
using namespace std;


// Constructors
String::String()
{
	str = nullptr;
	length = 0;
}

String::String(const char* inputStr)
{
	if (inputStr == nullptr) 
	{ 
		length = 0;
		str = new char[1]; 
		str[0] = '\0';
		return;
	}
	length = 0;
	while (inputStr[length] != '\0')
		++length;
	str = new char[length + 1];
	for (int i = 0; i < length; i++)
		str[i] = inputStr[i];
	str[length] = '\0';
}

String::String(const String& tempStr)
{
	length = tempStr.length;
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = tempStr.str[i];
	}
	str[length] = '\0';
}


// Cac ham xu ly theo yeu cau
void String::Nhap()
{
	char* tempStr = new char[1000];
	cin.getline(tempStr, 1000);
	length = 0;
	while (tempStr[length] != '\0')
		++length;
	delete[] str;
	str = new char[length + 1];
	for (int i = 0; i < length; i++)
		str[i] = tempStr[i];
	str[length] = '\0';
	delete[] tempStr;
}

void String::Xuat() const
{
	for (int i = 0; i < length; i++)
		cout << str[i];
}

void String::Copy(char* tempStr)
{
	for (int i = 0; i <= length; i++)
	{
		str[i] = tempStr[i];
	}
}

int String::Length() const
{
	return length;
}

String String::Connect(String& tempStr) const
{
	int lengthOfConnectedStr = length + tempStr.length;
	char* connectedStr = new char[lengthOfConnectedStr + 1];
	for (int i = 0; i < length; i++)
		connectedStr[i] = str[i];
	for (int i = 0; i < tempStr.length; i++)
	{
		connectedStr[length + i] = tempStr.str[i];
	}
	connectedStr[lengthOfConnectedStr] = '\0';
	String newStr(connectedStr);
	delete[] connectedStr;
	return newStr;

}

void String::Reverse()
{
	for (int i = 0; i < length/2; i++)
	{
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}

void String::ToLower()
{
	for (int i = 0; i < length; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
}

void String::ToUpper()
{
	for (int i = 0; i < length; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}
}

// Destructor
String::~String()
{
	if(str != nullptr)
		delete[] str;
}

