//상속 animal
#include <iostream>
#include <string>

using namespace std;

class Animal {

private://멤버 변수
	string name;
protected:// 상속된 클래스 까지만 접근 가능한 접근제어자
	int foot = 4;

public:// 생성자
	Animal() {  }
	Animal(string name) : name(name) {

	}
	~Animal() {}

public:// 메서드
	void setName(const string& new_name) {
		name = new_name;
	}
	void call() const {
		cout << name << endl;
	}
	void speak() const{
		cout << "운다" << endl;
	}
	void walk() const {
		cout << foot << "발로 걷는다" << endl;
	}
	void sleep() const {
		cout << "잔다" << endl;
	}

};
class Dog : public Animal {// Animal 상속. 상속 시 pulic 상위 클래스

public:// 생성자
	Dog() {};
	Dog(string name): Animal(name) {
	}
		// 초기화 리스트 주의
	~Dog() {};


public://메서드
	void speak() const {
		cout << "멍멍" << endl;
	}

};
class Duck : public Animal
{
public:
	Duck() {
		foot = 2;// protected로 부모 클래스의 멤버 변수 수정 가능
	}
public:
	void bark()const
	{
		cout << "꽥꽥!" << endl;
	}
};

int main() {
	cout << "Animal Class" << endl;
	Animal a1;
	a1.setName("동물");
	a1.speak();
	a1.walk();
	cout << endl;

	Animal a2("동물2");
	a2.call();
	a1.speak();
	cout << endl;

	cout << "Dog Class" << endl;
	Dog d1;
	d1.setName("몽실");
	d1.call();// 상위 클래스의 메서드 그대로 사용 가능
	d1.speak();// 하위 클래스 메서드로 적용됨
	d1.walk();
	cout << endl;

	Dog d2("콩이");
	d2.call();
	d2.speak();// 하위 클래스 메서드
	cout << endl;

	cout << "Duck Class" << endl;
	Duck du1;
	du1.setName("도널드");
	du1.speak();
	du1.sleep();
	du1.bark();
	du1.walk();// 상위 클래스 멤버 변수가 하위 클래스의 변경안으로 적용됨

	Animal a1;
	Dog d1;
	a1 = d1;//??
	a1.speak();
	a1.call();
	a1.walk();
	
	return 0;
}

/*
class A{

protected:
	int a1 = 0;
};

class B : public A{
public:
	B(){
	a1 = 10;
	}
	int b1 =0;
	void getInfo(){
	cout << a1 << ", " << b1<<endl;
	};

int main (){
	B b1;
	b1.getInfo();

	A a1;
	a1=b1; //가능 : 부모가 자식을 받을수는 있음
	b1=a1; // 불가능



return 0;
}


*/