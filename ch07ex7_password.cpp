//ch07ex7_password.cpp
#include <iostream>
#include <iomanip>
#include <cstring>

#define PW_LEN 10
using namespace std;

class Gate {

public:
	void checkPassword(char* _pw) const;
private: //접근 제어
	char pw[PW_LEN] = "12345678";
	void openGate() const;
};

int main() {

	char user_pw[PW_LEN];
	cout << "비밀번호:";
	cin >> setw(11) >> user_pw;
	cout << "입력된 비밀번호는 " << user_pw << endl;

	Gate g;
	g.checkPassword(user_pw);

	return 0;

}

void Gate::checkPassword(char* _pw) const
{
	if (strcmp(_pw, pw) == 0) {
		openGate();
	}
	else{
		cout << "invalid password" << endl;
}
}

void Gate::openGate() const
{
	cout << "문이 열립니다" << endl;
}
