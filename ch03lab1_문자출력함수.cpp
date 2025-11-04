//ch03lab1_문자출력함수.cpp
/*
1. prn_char(): '$'를 10개 출력
2. prn_char(문자): 문자를 10개 출력
3. prn_char(문자, 개수): 문자를 개수만큼 출력*/

#include <iostream>

using namespace std;
//main 아래에 정의
void prn_char();// 선언 시 출력값, 인수, ; 확인.
void prn_char(char ch);
void prn_char(char ch, int num);

int main() {

	prn_char();
	char ch = 'p';

	prn_char(ch);

	prn_char(ch, 4);// 함수 사용시 함수명만



	return 0;
}


// 리턴 값 확인, 출력 함수의 경우 개행 
void prn_char() {
	cout << "$$$$$$$$$$";
	cout << endl;
}

void prn_char(char ch) {
	for (int i = 1; i <= 10; i++) {
		cout << ch;
	}
	cout << endl;

}


void prn_char(char ch, int num) {
	for (int i = 1; i <= num; i++) {
		cout << ch;
	}
	cout << endl;
}