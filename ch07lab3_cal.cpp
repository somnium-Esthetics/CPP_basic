//ch07lab3_cal.cpp
/*
Calculator class
power(수1, 수2): 제곱
fact(수): 팩토리얼
displayCount(): 연산별 실행 횟수

연산별 실행 수
------------
제곱: 0회
팩토리얼: 1회
...
*/

#include <iostream>

using namespace std;

class cal {

public:
	int count[2] = { 0 };
	int o = 1;
	int n1_1 = 0;
	void power(double n1,int  n2);//1
	void fact(int n);//2
	void displayCount();
};
int main() {

	cal c1;
	c1.power(1, 5);
	c1.power(2, 5);
	c1.fact(3);
	c1.fact(4);
	c1.displayCount();

	return 0;
}


void cal::power(double n1, int n2)
{
	n1_1 = 1;
	count[0] += 1;
	if(n2>0)
	{
		for (int i = 0; i < n2; i++) {
			n1_1 *= n1;
			
		}

	}
	
	
	cout << n1 << "의 " << n2 << "제곱 = " << n1_1 << endl;
}

void cal::fact(int n)
{
	count[1] += 1;
	for (int i = 1; i <= n; i++ ){
		o*= i;
		
}
	cout << n << "펙토리얼:" << o << endl;
}

void cal::displayCount()
{
	cout << "연산별 실행횟수" << endl;
	cout << "==================" << endl;
	cout << "제곱:" << count[0] << "회" << endl;
	cout << "펙토리얼:" << count[1] << "회" << endl;
}
