//ch03lab2_삼각형넓이함수.cpp
/*
1. 함수 인자는 밑변, 높이가 주어진다.
2. 밑변과 높이는 정수, 실수 둘 다 사용이 가능하다.
3. 단, 밑변, 높이 모두 정수로 주어지면 면적도 정수로 반환한다.

bt, hi
오버로딩 정수, 실수
정수 정수 -> 정수
*/

#include <iostream>

using namespace std;

int trianlge(int bt, int hi );
double trianlge(double bt, double hi);


int main()
{
	cout<<trianlge(2, 3);
	cout << endl;
	cout << trianlge(2.0, 3.0);


	return 0;
}

int trianlge(int bt, int hi) {
	int ans = 0;
	ans = bt * hi/2 ;

	return ans;
}


double trianlge(double bt, double hi) {
	double ans = 0;
	ans = bt * hi / 2;// 2.0?

	return ans;
}

