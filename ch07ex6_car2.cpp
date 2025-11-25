//ch07ex6_car2.cpp
#include <iostream>
#include <string>

using namespace std;

class car {
private:
	int speed;
	int door;
	string color;

public:
	void setSpeed(int _spead);
	void setDoor(int _door);
	void setColor(string _color);
	int getSpeed();
	int getDoor();
	string getColor();
	void view();

};

int main() {
	car c1;
	c1.setSpeed(100);
	c1.setDoor(4);
	c1.setColor("RED");
	c1.view();



	return 0;
}

void car::setSpeed(int _speed)
{
	if (_speed >= 0 && _speed <= 300) {
		speed = _speed;
	}
	else {
		cout << "잘못된 접근입니다" << endl;
	}
}

void car::setDoor(int _door)
{
	if (_door >= 2 && _door <= 6) {
		door = _door;
	}
	else {
		cout << "잘못된 접근입니다" << endl;
	}
}

void car::setColor(string _color)
{
	string p_colors[] = { "RED","BLUE","GRAY","WHITE","BLACK" };
	int len = sizeof(p_colors) / sizeof(string);// 이렇게 하면 색상 배열을 추가하거나 제거해도 편리함
	for (int i = 0; i < len; i++) {
		if (_color == p_colors[i]) {
			color = _color;
			return;
		}
	}
	cout << "색상을 확인하세요" << endl;
}

int car::getSpeed()
{
	return speed;
}

int car::getDoor()
{
	return door;
}

string car::getColor()
{
	return color;
}

void car::view()
{
	cout << "속도:" << getSpeed() << endl;
	cout << "문:" << getDoor() << endl;
	cout << "색상:" << getColor() << endl;
}

