//ch06ex3_두문자열합치기.cpp
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

char* addstring(const char* str1, const char* str2);

int main() {
	char str1[10] = "Go";
	char str2[10] = "ahead";

	char* strConnect = addstring(str1, str2);// 함수의 리턴 값으로 배열을 만듦
	cout << "연결된 문자열은 [" << strConnect << "] 입니다." << endl;
	delete[] strConnect;// 동적 할당 메모리 삭제 


	return 0;
}

char* addstring(const char* str1, const char* str2) {
	char* temp = new char[strlen(str1) + strlen(str2) + 1];// 동적 할당으로 빈 배열 생성, 메모리 주소 변수= 포인터
	strcpy(temp, str1);//빈 배열에 복사하기
	strcat(temp, str2);//배열 뒤에 붙여넣기

	return temp;
}