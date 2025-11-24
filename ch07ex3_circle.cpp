//ch07ex3_circle.cpp
#include <iostream>

using namespace std;

class Circle {
public:
	double radius;
	const double PI = 3.141592;

public:
	void setRadius(double _radius);
	double getArea();
	double getCir();

};

int main() {
	Circle c1;
	c1.setRadius(5);
	cout<< "넓이 :"<<c1.getArea()<<endl;
	cout<< "둘레 :"<<c1.getCir()<<endl;



	return 0;
}

void Circle::setRadius(double _radius) {// setter : 사용자가 class의 인수에 직접접근을 막음
	// 1차 검증된 값을 인수로 넣을때 사용. 
	if (_radius>0)radius = _radius;
}
double Circle::getArea() {
	return PI * radius * radius;
}
double Circle::getCir() {
	return 2 * radius * PI;
}