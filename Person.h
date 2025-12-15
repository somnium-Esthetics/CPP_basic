#pragma once
#include <iostream>
#include <string>
using namespace std;
// 헤더 파일은 클래스의 설계도, 선언만 해둠 구현은 cpp파일 내부에서 구현
class Person
{
protected:
	string name;
	int age;

public://생성자
	Person(string name, int age);
	
	Person(const Person& other);//복사 생성자
	~Person();

public://메서드
	void print() const;  // 객체 정보 출력

	// getter
	string getName() const;
	int getAge() const;
};

