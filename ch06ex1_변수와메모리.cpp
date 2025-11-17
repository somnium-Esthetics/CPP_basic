//ch06ex1_변수와메모리.cpp
#include <iostream>

using namespace std;

int g = 30;// data에 저장됨. 전역변수 : 프로그램 시작~종료

void local() {
	int n = 12; //stack에 저장됨. 지역
	cout << "n:" << n << endl;
	cout << "g:" << g << endl;
	{
		int n = 33;
		cout << "n:" << n << endl;//지역 내 지역

	}
	cout << "n:" << n << endl;

}

void count() {
	static int cnt = 0;//정적 변수. 지역 내에서 사용 가능한 전역 변수. data에 저장됨
	// 선언 및 정의는 첫 호출 시에만 실행 되고 그 후부터 값은 유지됨. 재선언 안됨.
	cnt++;
	cout << "호출횟수: " << cnt << endl;
}

void init() {
	static int key = 0;
	if (key == 0) {
		cout << "초기화 진행" << endl;
	}
	else {
		cout << "." << endl;
	}
	key++;
}

int main() {
	int n = 10;//main내 지역
	cout << "n:" << n << endl;
	cout << "g:" << g << endl;

	local();
	count();
	count();
	count();
	count();
	cout << "=========================" << endl;
	init();
	init();
	init();
	init();
	init();
	init();


	return 0;
}