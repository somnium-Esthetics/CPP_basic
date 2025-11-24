//ch07lab2_rectangle.cpp
//가로와 세로 속성
//속성을 설정하는 setRect(), 면적을 구하는 getArea() 메서드와 둘레를구하는 getCircumference() 메서드
//. display() 메서드는 사각형의 가로와 세로를 출력
#include <iostream>

using namespace std;

class rec {

public:
	double bi;
	double li;

	void setRect(double _bi, double _li);
	double getArea();
	double getCir();
	void display();
	
};

int main() {

	rec r1;
	r1.setRect(1.1, 2.2);
	cout << "넓이:" << r1.getArea() << endl;
	cout << "둘레:" << r1.getCir() << endl;
	cout << endl;
	r1.display();

	return 0;
}
void rec::setRect(double _bi, double _li) {
	if (_bi > 0 && _li > 0) {
		bi = _bi;
		li = _li;
	}
}
double rec::getArea() {
	return bi * li;
}
double rec::getCir() {
	return bi * 2 + li * 2;
}
void rec::display() {
	cout << "가로 :" << bi << endl;
	cout << "세로 :" << li << endl;
	cout << "넓이 :" << getArea() << endl;
	cout << "둘레 :" << getCir() << endl;
}

