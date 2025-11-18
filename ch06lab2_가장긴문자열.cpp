//ch06lab2_가장긴문자열.cpp
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
#define SIZE 100
using namespace std;

int main() {
	char str[SIZE];
	char* result = NULL;

	while (true) {
		cout << "문자열을 입력하세요." << endl;
		cin >> str;
		//배열 하나 만들어서 넣고 긴거를 비교해서 넣고 지우기
		
		if (result == NULL) {
			result = new char[strlen(str) + 1];
			strcpy(result, str);// rseult는 첫값
		}
		else {//두번째 부터
			if (strlen(result) < strlen(str)) {
				char* temp = new char[strlen(str)];
				strcpy(temp, str)// 여기서부터 다시해봇기
			}
			else {

			}
		}

		if (strcmp(str, "exit") == 0) {
			break;
		}

	
	}

	return 0;

}