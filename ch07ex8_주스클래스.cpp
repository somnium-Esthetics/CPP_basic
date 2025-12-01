//ch07ex8_주스클래스.cpp
#include <iostream>
#include <string>

using namespace std;

class Juice {
private:
	string mat1;
	string mat2;
public:
	Juice() {
		mat1 = "바나나";
	}
	Juice(string _mat1) :Juice(_mat1, "") {};
	Juice(string _mat1, string _mat2) {
		mat1 = _mat1;
		mat2 = _mat2;
	}// 위임 생성자 본체
	
	


public:
	void showJuice();
};
int main()
{
	Juice j1;// 기본은 바나나
	j1.showJuice();

	Juice j2("딸기");
	j2.showJuice();

	Juice j3("아보카도", "블루베리");
	j3.showJuice();

	return 0;
}

void Juice::showJuice()
{
	cout << mat1 << " " << mat2 << "주스 입니다." << endl;
}
