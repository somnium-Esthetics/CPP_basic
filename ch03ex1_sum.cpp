//ch03ex1_sum.cpp
/*함수 오버로딩(function overloading)은 매개변수 타입이 다르거나,
매개변수의 개수가 다른 경우 함수 이름을 동일하게 선언하여 사용하는 것을 말한다.*/

#include <iostream>

using namespace std;

int sum(int x, int y) {

	return x + y;

}

double sum(double d1, double d2) {

	return d1 + d2;

}





int main()
{
	int x = 1;
	int y = 2;

	double d3 = 1.2;
	double d4 = 2.2;

	cout << sum(x, y);
	cout << endl;

	cout << sum(d3, d4);


	


	return 0;
}
