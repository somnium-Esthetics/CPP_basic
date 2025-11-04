//ch02lab3_매출
//제품명: keyboard
//가격: 8413
//수량 : 30

//매출액은 252390입니다.
#include <iostream>

using namespace std;

int main()
{
	cout << "제품명: " ;
	string name;
	cin >> name;
	cout << "가격: " ;
	int price;
	cin >> price;
	cout << "수량: ";
	int num;
	cin >> num;
	cout << "\n" << "매출액은 " << price * num << "입니다.";


	return 0;
}