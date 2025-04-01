#include "String.h"
#include <iostream>
using namespace std;

int main()
{
	char* temp = new char[10];
	cin.getline(temp, 10);

	String S1, S2(10), S3(10, temp);
	return 0;
}