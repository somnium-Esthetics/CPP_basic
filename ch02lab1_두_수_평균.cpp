//두 정수 입력: 10 20
//두 정수 평균 : 15

//두 실수 입력 : 10.5 20.5
//두 실수 평균 : 15.5

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "두 정수 입력 :";
	cin >> a >> b;
	cout << "두 정수 평균 :";
	double av = (a + b) / 2.0 ;//c에서 정수의 나눗셈은 몫이 나옴, 2.0으로 나누는 이유
	//(double)a로 해서 일시적으로 a를 실수로 변환할 수 있음
	cout <<  av;
	cout << "\n";

	double d1, d2;
	cout << "두 실수 입력 :";
	cin >> d1 >> d2;
	cout << "두 실수 평균 :";
	cout << (d1+d2)/2 ;

	return 0;
}