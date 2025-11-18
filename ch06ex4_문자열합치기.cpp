//ch06ex4_문자열합치기.cpp
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
#define SIZE 100

using namespace std;

int main() {
	
	char str[SIZE];
	char* result = NULL;

	while (true) {
		//입력
		cout << "문자열 ?" << endl;
		cin >> str;//입력 받는 배열

		if (strcmp(str, "exit") == 0) {
			break;
		}
		if (result == NULL) {

			result = new char[strlen(str) + 1];
			strcpy(result, str);// aa
		}
		else {//두번째부터 bbb
			char* temp = new char[strlen(result) + strlen(str) + 1];
			strcpy(temp, result);//aa=re, temp
			strcat(temp, str);//aabbb = temp
			
			delete[] result;
			 result =temp;
			


		}
		cout << result << endl;

		//첫 문자열이면 result에 추가
		//아니면 temp에 생성 후 result에 새 포인터 주기
	}

	cout << result;
	delete[] result;
	

	return 0;
}