//ch04ex2_stringcat.cpp
#include <iostream>

using namespace std;


void stringcat(char* pstr1, char* pstr2);

int main() {

	char str1[20] = "Hello";
	char str2[10] = "World";
	stringcat(str1, str2);

	cout << "str1: " << str1 << endl;
	return 0;

}

void stringcat(char* pstr1, char* pstr2) {
	//1.pstr1의 마지막 인덱스 찾기
	//2. pstr1의 마지막 글자부터 pstr2 글자 넣기
	//3. 문자열 종결자 '\0'추가

	int index;
	for (index = 0; pstr1[index] != '\0'; index++);
	for (int i = 0; pstr2[i] != '\0'; i++,index++) {
		pstr1[index] = pstr2[i];
	}
	pstr1[index + 1] = '\0';

	

}