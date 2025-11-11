//ch04lab4_person.cpp
/*
인물  구조체(Person)의 내용을 출력하는 display_person()함수를 구현하는 코드를 작성하시오.
인물 구조체는 이름(name, 100자), 성별(gender, 10자), 나이(age, 정수) 등의 변수로 구성된다.
이름: 홍길동
성별: 남
나이: 9999
*/

#include <iostream>

using namespace std;


struct Person
{
	string name;
	string gender;
	int age;
};
void display_person(Person& who);


int main() {

	Person jack = { "Jack", "male", 32 };


	display_person(jack);

	return 0;
}

void display_person(Person& who) {

	cout << "이름 :" << who.name << endl;
	cout << "성별 :" << who.gender << endl;
	cout << "나이 :" << who.age << endl;



}
