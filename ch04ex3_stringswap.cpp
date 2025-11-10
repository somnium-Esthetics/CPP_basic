//ch04ex3_stringswap.cpp
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
 

using namespace std;

void swap(char* pstr1, char* pstr2);

int main() {
	char str1[20] = "Hello";
	char str2[10] = "world";

	swap(str1, str2);

	cout << "str1 :" << str1 << endl;

	return 0;

}

void swap(char* pstr1, char* pstr2) {

	char temp[255];
	strcpy(temp, pstr1);
	strcpy(pstr1, pstr2);
	strcpy(pstr2, pstr1);
}