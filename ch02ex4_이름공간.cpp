//ch02ex4_이름공간.cpp
//using std::cin;
//using std::cout;

//특정 namespace에서 일부만 사용

#include <iostream>

using namespace std;

namespace pitca1 {

	void space() {
		cout << "이곳은 1호점 입니다";
		cout << endl;

	}

}

namespace pitca2 {

	void space() {
		cout << "이곳은 2호점 입니다";
		cout << endl;

	}

}

namespace pitcaEx {

	void spaceEx() {
		cout << "이곳은 3호점 입니다";
		cout << endl;

	}

	void spaceEx2() {
		cout << "이곳은 3호점 분점 입니다";
		cout << endl;

	}

}
using pitca2::space;//전체 열때만 namespace
using namespace pitcaEx;




int main() {

	pitca1::space();
	space();
	spaceEx();
	spaceEx2();
	return 0;
}