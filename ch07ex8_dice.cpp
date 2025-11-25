//ch07ex8_dice.cpp
#include<iostream>
#include <string>

using namespace std;

class dice {
public:
	void start();

private:
	int dice;
	int user;
	void rollDice();
	void getUser(string prompt);
	void checkUser();


};

int main() {
	dice d1;
	srand((unsigned)time(NULL));
	d1.start();


	return 0;
}

void dice::start()

{
	rollDice();
	
	getUser("주사위 눈금 :");
	checkUser();
	cout << "주사위 눈금 :" << dice << endl;


}

void dice::rollDice()
{
	dice = rand() % 6 + 1;
	

}

void dice::getUser(string prompt) {
	int _user;
	cout << prompt;
	cin >> _user;
	if (_user >= 1 && _user <= 6) {
		user = _user;
		return;
	}
	else {
		getUser("1~6 사이 숫자를 입력하세요:");
	}

}

void dice::checkUser()
{
	if (user == dice) {
		cout << "맞았습니다." << endl;
	}
	else {
		cout << "틀렸습니다." << endl;
	}
}
