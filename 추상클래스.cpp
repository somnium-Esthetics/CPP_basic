// 추상 클래스.cpp
#include <iostream>
#include <string>

using namespace std;

enum {
	AT_NONE,
	AT_DOG,
	AT_CAT,
	AT_EXIT
};
class Animal {
public:
	Animal() {
		cout << "Animal생성자" << endl;
	};
	~Animal() {
		cout << "Animal 소멸자" << endl;
	}
public:
	virtual void speak() const = 0;// 가상함수
	virtual void move() const = 0;

};

class Dog :public Animal {
public:
	Dog() {
		cout << "Dog 생성자" << endl;
	}
	~Dog() {
		cout << "Dog 소멸자" << endl;
	}
public:
	void speak()const  override {
		cout << "멍멍" << endl;
	}
	void move() const override {
		cout << "4발로 이동한다" << endl;

	}

};
class Cat : public Animal {
public: 
	Cat() {
		cout << "Cat 생성자" << endl;
	}
	~Cat() {
		cout << "Cat 소멸자" << endl;
	}
public:
	void speak() const override {
		cout << "야옹" << endl;
	}
	void move() const override {
		cout << "천천히 움직임" << endl;
	}
};
int main() {
	int AnimalType;
	while (true) {
		Animal* ani = nullptr;

		cout << "1.강아지 2.고양이 3.종료" << endl;
		cout << "동물 선택 :";
		cin >> AnimalType;
		switch (AnimalType) {
		case AT_DOG:
			ani = new Dog();
			break;
		case AT_CAT:
			ani = new Cat();
			break;
		case AT_EXIT:
			return 0;
			break;
		}
		ani->speak();
		ani->move();

		delete ani;
		system("pause");
		system("cls");

	}

	return 0;
}