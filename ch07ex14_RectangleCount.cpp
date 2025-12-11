//ch07ex14_RectangleCount.cpp
//this 연산자

#include <iostream>
#include <string >

using namespace std;

class Rectangle {
public:
	Rectangle(int base, int height){
		this-> base = base;//객체의 요소 지정. base는 함수 매개 변수
		this-> height = height;
		RecCount++;// 객체 생성 횟수 만큼 카운트
	}

	
	Rectangle(Rectangle& other) {//복사 연산자 추가
		this->base = other.base;
		this->height = this->height;
		RecCount++;
	}
	
	
	

	~Rectangle(){}
private:
	int base;
	int height;
	static int RecCount;//static 변수는 클래스 내부 선언, 클래스 외부 main밖에서 초기화 필요!!
	//static 변수는 객체에 포함되지 않고 클래스에서 공통적으로 공유하는 변수가 됨

public:
	string getRectangle() const;
	int getAreaRec();
	static int getReccount();// static 함수는 static 변수에게만 접근 가능


	bool operator==(const Rectangle& other) {// ==연산자에 대한 오버로딩.  
		return this->base == other.base && this->height == other.height;
	}
	/*
	- 연산자 오버로딩 형식 -
	연산결과타입 operator 연산자 (피연산자의 타입)
	{  구현  }
	*/
	Rectangle operator+(const Rectangle& other) {
		Rectangle temp(1,1);
		temp = Rectangle(this->base + other.base, this->height + other.height);
		
		return temp;
		//복사 생성자를 안건드렸으면 temp 필요 X
	}
	Rectangle operator+=( const Rectangle& other) {//+= 연산자 오버로딩
		this->base += other.base;
		this->height += other.height;
		return *this;
		// 연산 결과 타입을 void로 잡으면 return 없어도됨, +=는 연속해서 쓸수 있어서 return 값을 Rectangle로 잡는거

	}


};

int Rectangle::RecCount = 0;//클래스 외부에서 초기화

int main() {
	Rectangle r1(10, 20);
	Rectangle r2(5, 10);
	cout << r1.getRectangle() << endl;
	cout << r2.getRectangle() << endl;
	Rectangle r3(1, 10);
	cout << r3.getRectangle() << endl;
	r3 = r1;// 선언이 아닌 대입;
	
	if (r1 == r3) {//r1.operator==(r5). ==이라는 연산자에 대해 오버로딩이 필요. 객체 마다 연산자가 활용되는 방식이 다양할수 있으니까.
		// == 연산자에 oppertor라는 함수로 오버로딩을 만들어줌
		cout << "r1, r3는 같다" << endl;
	}
	else {
		cout << "r1, r3는 같지 않다" << endl;
	}


	cout << "객체 생성 횟수 :" << Rectangle::getReccount() << endl;
	
	Rectangle r4(1, 1);
	r4 = r1 + r2;//+ 연산자 오버로딩 필요
	cout << "r4:" << r4.getRectangle() << endl;

	r1 += r2;// r1= r1+r2; += 연산자 오버로딩 필요/ r1.operator+=(r2) 형태
	cout << r1.getRectangle() << endl;
	cout << endl;
	cout << r1.getRectangle() << endl;
	cout << r2.getRectangle() << endl;
	cout << r3.getRectangle() << endl;
	cout << endl;
	r1 += r2 += r3;
	cout << r2.getRectangle() << endl;

	cout << r1.getRectangle() << endl;











	return 0;
}



string Rectangle::getRectangle() const
{

	return "base :"+to_string(base) +" height :"+to_string(height);
}

int Rectangle::getAreaRec()
{
	return this-> base* this->height;
}

int Rectangle::getReccount()
{
	return RecCount;
}
