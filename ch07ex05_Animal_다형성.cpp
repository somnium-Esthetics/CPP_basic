//ch07ex05_Animal_다형성.cpp
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
	string name;
public:
	Animal() {};
	Animal(string name) :name(name) {
		cout << "Animal 생성자" << endl;
	}
	virtual ~Animal() {
		cout << "Animal 소멸자" << endl;
	}
public:
	void printName()const {
		cout << "이름:" << name << endl;
	}
	virtual void makeSound() {};// 버츄얼 내부 구현은 형식만 맞춰줘야함 ㅎ
};

class Dog : public Animal {
public:
	Dog(string name) : Animal(name) {
		cout << "Dog 생성자" << endl;
	};
	~Dog() {
		cout << "Dog 소멸자" << endl;
	}
public:

	virtual void makeSound() override {
	cout << "멍멍" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string name) :Animal(name) {
		cout << "Cat 생성자" << endl;
	}
	~Cat() {
		cout << "Cat 소멸자" << endl;
	}
public:
	virtual void makeSound()override {
		cout << "냐옹" << endl;
	}


};


int main() {
	/*
	Animal* Ani =new Animal("동물");
	Animal* D =new Dog("콩이");
	Animal* C =new Cat("깜이");
	cout << "---------------------------" << endl;
	Ani->printName();
	Ani->makeSound();
	cout << "---------------------------" << endl;
	D->printName();
	D->makeSound();
	cout << "---------------------------" << endl;
	C->printName();
	C->makeSound();

	delete Ani;
	delete D;
	delete C;
	*/
	Animal*  pet[3];// 동적 배열에 객체를 받을때는 수동으로 모든 배열 객체 요소를 지워줘야함!!
	pet[0] =new  Animal{ "동물" };
	pet[1] =new  Dog{ "콩이" };
	pet[2] =new  Cat{ "깜이" };

	cout << "================================" << endl;
	pet[0]->printName();
	pet[0]->makeSound();
	cout << "================================" << endl;
	pet[1]->printName();
	pet[1]->makeSound();
	cout << "================================" << endl;
	pet[2]->printName();
	pet[2]->makeSound();

	cout << "================================" << endl;
	for (int i = 0; i < 3; i++) {
		delete pet[i];
	}

	return 0;
}