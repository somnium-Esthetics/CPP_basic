//ch07lab1_triangle.cpp
//밑변과 높이 속성
// 삼각형 속성을 정하는 setTriangle(), 면적을 구하는 getArea() 메서드
//display() 메서드는 삼각형의 밑변과 높이

#include <iostream>

using namespace std;

class triangle {

public:
	double bottom;
	double height;

	void setTriangle(double _bottom, double _height);
	double getArea();
	void display();
};

int main() {

	triangle t1;
	t1.setTriangle(1.1, 2.4);
	t1.display();
	cout << t1.getArea()<< endl;

	return 0;
}

void triangle::setTriangle(double _bottom, double _height) {
	if (_bottom > 0 &&  _height > 0) {
		bottom = _bottom;
		height = _height;
	}

}
double triangle::getArea() {
	return bottom * height * 0.5;

}
void triangle::display() {
	cout << "밑면 :" << bottom << endl;
	cout << "높이 :" << height << endl;
	cout << "넓이 :" << getArea()<< endl;
	cout << endl;
	

}