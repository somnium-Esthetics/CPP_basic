//객체배열2.cpp
#include <iostream>
#include <string>

using namespace std;

class Student_1 {
public: //생성자
	Student_1() {
		cout << "생성자1" << endl;
	}
	Student_1(string name, int age, char grade) : name(name), age(age), grade(grade) {
		cout << "생성자2" << endl;
	}
	~Student_1() {
		cout << "소멸자" << endl;
	 };

private://멤버 변수
	string name;
	int age;
	char grade;

public:
	void printInfo();

	friend ostream& operator<<(ostream& os, Student_1& s) {
		os << "(" << s.name << ", " << s.age <<", "<< s.grade<< ")";
		return os;
	}

};


int main()
{/*
	Student_1 st[3] = {
		Student_1("철수", 17, 'A'),
		Student_1("영수", 19, 'B'),
		Student_1("민철", 16, 'D')
	};

	st[0].printInfo();

	for (int i = 0; i < 3; i++)
	{
		st[i].printInfo();
	}
 */
	//동적 할당 객체 배열
	Student_1* people = new Student_1[3];
	people[0] = { "sam",11,'B' };
	people[1] = { "jack",31,'A' };
	people[2] = { "tom",15,'E' };

	for (int i = 0; i < 3; i++) {

		people[i].printInfo();
	}

	cout << *(people + 0) << endl;//ostream 연산자 오버로딩을 이용해 포인터도 << 로 사용가능
	//원래는 cout << people[0] << endl; 로 사용해야함


	delete[] people;


	return 0;
}

void Student_1::printInfo()
{
	cout << "이름 :" + name + " 나이 :" + to_string(age) + " 학점 :" + grade << endl;
}
