//ch07ex1_account_struct.cpp
#include <iostream>
#include <string>
using namespace std;

struct account {
	string name;
	string id;
	int balance;
};

void deposit(account& acc, int dep);
void withdraw(account& acc, int with);
void view(account& acc);

int main() {

	account acc;

	acc.name = "홍길동";
	acc.id = "111-222-333";
	acc.balance = 0;

	deposit(acc, 10000);
	view(acc);
	withdraw(acc, 9000);
	view(acc);
	withdraw(acc,10000);
	view(acc);





	return 0;
}
void deposit(account& acc, int dep) {

	if (dep > 0) {
		acc.balance += dep;

	}
	else {
		cout << "입금 불가" << endl;

	}

}

void withdraw(account& acc, int with) {

	if (acc.balance < with) {
		cout << "출금불가" << endl;

	}
	else {
		acc.balance -= with;

	}
}
void view(account& acc) {

	cout << "이름 : " << acc.name << endl;
	cout << "id : " << acc.id<< endl;
	cout << "잔고 : " << acc.balance << endl;
	cout << "=================" << endl;
}
