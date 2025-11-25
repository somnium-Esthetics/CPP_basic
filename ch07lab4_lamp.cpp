//ch07lab4_lamp.cpp
#include <iostream>

using namespace std;

class lamp {
private:
	bool isOn=false;// 램프상태
	void display() const;
public:
	void turnOn();//켜기
	void turnOff();//끄기
	void pushSwitch();//반전
};

int main() {
	lamp L;
	cout << "turnOn:" << endl;
	L.turnOn();
	L.turnOff();
	cout << "turnOn:" << endl;
	L.turnOn();
	L.turnOff();
	cout << "turnSwich:" << endl;
	L.pushSwitch();
	L.pushSwitch();

	return 0;
}

void lamp::display() const
{
	if (isOn == true) {
		cout << "램프 켜짐" << endl;
	}
	else {
		cout << "램프 꺼짐" << endl;
	}
}

void lamp::turnOn()
{

		isOn = true;
		

	display();
}

void lamp::turnOff()
{

		isOn == false;

	display();
}

void lamp::pushSwitch()
{
	if (isOn) {
		isOn = false;
	}
	else {
		isOn = true;
	}
	//isOn = no isOn; !!!!
	display();
}
