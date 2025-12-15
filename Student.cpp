#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name, int age, string ID) :Person(name, age),ID(ID) {
	cout << "Student 생성자" << endl;
}
Student::Student(const Student& other): Person(other),ID(other.ID) {
	cout << "Student 복사 생성자" << endl;
}
void Student::info() const {
	cout << ID << endl;
}
Student::~Student() {
	cout << "소멸자" << endl;
}