//ch03lab3_문자출력함수.cpp
/*

prn_char(문자, 개수): 문자를 개수만큼 출력

문자를 생략 시 문자는 기본값으로 '$'를 갖는다.
개수를 생략 시 개수는 기본값으로 10을 갖는다.

- prn_char(): '$'를 10개 출력
- prn_char(문자): 문자를 10개 출력
- prn_char(문자, 개수): 문자를 개수만큼 출력

*/

#include <iostream>

using namespace std;

string  prn_char(char letter ='$', int num = 10);

int main() {


	char k = '#';
	cout << prn_char() << endl;
	cout << prn_char(k) << endl;
	cout << "문자 입력 :" << endl;
	char k_1;
	cin >> k_1;
	cout << prn_char(k_1,20) << endl;

	return 0;
}


string  prn_char(char letter , int num ) {
	string ans;
	for (int i = 1; i <= num; i++) {
		ans += letter;
	}
	return ans;
}


