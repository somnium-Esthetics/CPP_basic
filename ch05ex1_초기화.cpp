//ch05ex1_초기화.cpp

#include <iostream>

using namespace std;

int main() {

	int n1 = 4;
	int n2(5);
	int n3 = { 3 };
	int n4{ 7 };
	int n0{};//0
	//int n00; c++의 경우 출력 안됨. 오류. 선언만 한 경우

	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << n4 << endl;
	cout << n0 << endl;
	
	bool b; //true =1, false =0
	b = true;//1


	cout << b << endl;
	cout <<not b << endl;//0

	//auto 자료형. 자료형을 선언 정의함과 동시에 우항의 값에 따라 자료형을 자동으로 설정
	// 함수 내부에서 인자를 무작위로 받을때 유용
	auto a1 = 3;
	auto a2 = 3.4;
	auto a3 = 'c';

	cout << a1 << ", " << a2 << ", " << a3 << endl;
	cout << typeid(a1).name() << endl;

	int arr[] = { 10,20,30,40,50 };
	for (int i = 0; i<5 ; i++) {
		cout << arr[i] << endl;

	}
	int arr2[20] = { 10,20,30,40,50,60,70,80 };

	//for 내부 one:배열 -> 배열에서 하나씩 가져옴.
	//배열 내부 값의 자료형을 모르는 경우 auto형 사용 가능.
	cout << endl;
	for (int one : arr2) {
		cout << one << " ";
	}
	cout << endl;
	for (auto& one : arr2) {
		cout << one << " ";
	}
	cout << endl;

	return 0;
}