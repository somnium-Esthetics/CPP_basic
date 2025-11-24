
//문자열 n개를 입력 받고 가장 긴 문자열을 반환하는 코드
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#define SIZE 100
using namespace std;

int main() {

	int num;
	cout << "단어의 개수를 입력하세요 :";
	cin >> num;
	char* result = NULL;


	for (int i = 0; i < num; i++) {
		char str[SIZE];
		cout << "단어를 입력하세요 :";
		cin >> str;
		cout << endl;
		if (result == NULL) {
			result = new char[strlen(str)+1];
			strcpy(result, str);
		}
		else {//두번째부터
			if (strlen(result) < strlen(str)) {
				delete[] result;
				result = new char[strlen(str) + 1];
				strcpy(result, str);

			}
			else {

			}
		}
		if (i == num - 1) {
			cout << "가장 긴 문자열은 " << result << "입니다" << endl;
		}
	}
	delete[] result;

}
