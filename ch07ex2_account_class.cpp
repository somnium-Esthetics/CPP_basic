//ch07ex2_account_class.cpp
#include <iostream>

using namespace std;

//변수(속성, 함수(메서드)

class Account {
public:
	string name;
	string id;
	int balace;

public:
	void display();
	void deposit(int amount);
	void withdraw(int amount);
};

int main() {
	Account acc1;
	acc1.name = "홍";
	acc1.id = "111-22-333";
	acc1.balace = 0;

	acc1.display();
	acc1.deposit(10000);
	acc1.display();
	acc1.withdraw(1000);
	acc1.display();
	acc1.withdraw(2000000);
	acc1.display();



	return 0;
}
void Account::display() {
	cout << "이름:" << name << endl;
	cout << "id:" << id << endl;
	cout << "잔고:" << balace << endl;
	cout << endl;
}
void Account::deposit(int amount) {
	if (amount > 0) balace += amount;
}
void Account::withdraw(int amount) {

	if (balace > amount)balace -= amount;
}