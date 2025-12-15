#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(string name, int age) : name(name), age(age) {
	cout << "생성자 1" << endl;
}

Person::Person(const Person& other):name(other.name), age(other.age) {
	cout << "복사 생성자" << endl;
}
Person::~Person() {
	cout << "소멸자" << endl;
}

void Person::print() const {
	cout << name << ", " << age << endl;
}
string Person::getName() const {

	return name;
}

int Person::getAge() const {
	return age;
}
