//ch07lab7_Car.cpp
#include <iostream>
#include <string>

using namespace std;

class CAR {
	/*	만약 speed가 음수이거나 300 초과이면 0으로 보정

		door 값이 2~7 범위를 벗어나면 4로 보정  */





/*CAR(string _color, int _speed, int _door) {
		if (_speed < 0 || _speed >300) {
			speed = 0;
		}
		else {
			speed = _speed;
		}
		if (_door < 2 || _door >= 8) {
			door = 4;
		}
		else {
			door = _door;
		}
		color = _color;
	}*/	
public:	
	CAR(string _color = "RED", int _speed = 100, int _door = 3) :color(_color), speed(_speed), door(_door) {}
	// 간략화, 유효성 검사는 힘듦.

private:
	string color;
	int speed;
	int door;
public:
	void display() const;
};

int main() {
	CAR c1("BLACK", 60, 2);
	c1.display();
	CAR c2("BLACK", -2, 2);
	c1.display();

	return 0;
}

void CAR::display() const
{
	cout << "차량색상: " << color << endl;
	cout << "속도: " << speed << endl;
	cout << "문: " << door << endl;
}
