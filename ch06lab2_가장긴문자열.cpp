//ch06lab2_가장긴문자열.cpp
//문자열 n개를 입력 받고 가장 긴 문자열을 반환하는 코드
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#define SIZE 100
using namespace std;



int main() {
	int num;
	cout << "단어의 개수를 입력하세요 :";
	cin >> num;

	char** words = new char*[num];// WORD라는 포인터는 num개의 char 포인터를 접근하게 해주는 포인터
	for (int i = 0; i < num; i++) {
		words[i] = new char[SIZE];//메모리 할당
		cout << "단어를 입력하세요 :";
		cin >> words[i];
		cout << endl;
		cout << "=======================" << endl;

	}



	char* ans = NULL;
	for (int i = 0; i < num; i++) {
		if (ans == NULL) {
			ans = new char[strlen(words[i]) + 1];
			//ans = char [SIZE]; 불가
			strcpy(ans, words[i]);
		}
		else {
			if (strlen(ans) < strlen(words[i])) {
				delete[] ans;
				ans = new char[strlen(words[i]) + 1];
			}
		}


	}
	cout << "가장 긴 문자열은 " << ans << "입니다" << endl;
	delete[] ans;
	delete[] words;

	return 0;
}

