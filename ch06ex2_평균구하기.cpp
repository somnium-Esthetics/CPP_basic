//ch06ex2_평균구하기.cpp
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "평균을 구할 학생 수 :";
	cin >> n;
	//int score [n] ->선언이 안됨. 컴파일 당시 메모리를 잡아줘야하는데 
	int* score = new int[n];// 동적 할당. heap에다가 할당해줌 임의로
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번 점수 :";
		cin >> score[i];
	}

	//합
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += score[i];
	}
	cout << "==================" << endl;

	cout << "학생 점수의 합: " << sum << endl;
	delete[] score;
	return 0;

}