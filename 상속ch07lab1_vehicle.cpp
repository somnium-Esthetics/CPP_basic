/*
Vehicle (기본 클래스):

속성:
brand: 이동수단의 브랜드 (문자열).
wheels: 이동수단의 바퀴 수 (정수).

메서드:
printInfo(): 이동수단의 정보를 출력하는 함수.


Car (자동차, Vehicle 클래스를 상속):

속성:
doors: 자동차의 문 수 (정수).

메서드:
move(): 자동차가 도로를 따라 이동하는 방식에 대한 구체적인 구현.
printInfo(): 자동차의 정보를 출력합니다 (브랜드, 바퀴 수, 문 수).


Bicycle (자전거, Vehicle 클래스를 상속):

속성:
hasBell: 자전거에 벨이 있는지 여부 (불린 값).

메서드:
move(): 자전거가 도로를 따라 이동하는 방식에 대한 구체적인 구현.
printInfo(): 자전거의 정보를 출력합니다 (브랜드, 바퀴 수, 벨 유무).
*/
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
	Vehicle(string brand, int wheels): brand(brand), wheels(wheels){}
	~Vehicle() {};
protected:
	string brand;
	int wheels;

public: 
	void printInfo();

};

class Car : public Vehicle {
public:
	Car(string brand, int wheels, int doors): Vehicle(brand, wheels), doors(doors) {}
	~Car() {}

protected:
	int doors;

public:
	void move();
	void printInfo();

};

class Bicycle : public Vehicle {
public:
	Bicycle(string name, int wheels, bool hasBell): Vehicle(name, wheels), hasBell(hasBell) {}
	~Bicycle() {}

protected:
	bool hasBell;

public: 
	void move();
	void printInfo();

};

int main() {
	Car c1("Kia", 4, 2);
	cout << "차량정보" << endl;
	c1.printInfo();
	c1.move();
	cout << endl;

	Bicycle b1("삼천리", 2, true);
	cout << "자전거정보" << endl;
	b1.printInfo();
	b1.move();


	return 0;
}

void Vehicle::printInfo()
{
	cout << brand << "," << wheels << endl;
}

void Car::move()
{
	cout << "직진중" << endl;
}

void Car::printInfo()//오버라이딩
{
	cout << brand << "," << wheels << ", " << doors << endl;
}

void Bicycle::move()
{
	cout << "직진중" << endl;
}

void Bicycle::printInfo()
{
	cout << brand << "," << wheels <<", "<< hasBell<< endl;
}
