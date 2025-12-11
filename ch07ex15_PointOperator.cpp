//ch07ex15_PointOperator.cpp
#include <iostream>
#include <string>
using namespace std;

class Point {
	friend Point operator+(int num, const Point& other);
	// 클래스 외부 함수가 클래스 내부 private 변수에 접근 할수 있도록 해줌

public:
	Point(int _a=1, int _b=1):a(_a),b(_b) {

	}
	~Point() {

	}

public:
	void  getPoint() {
		cout << to_string(a) + ", " + to_string(b);
		cout << endl;
	};


	bool operator==(Point& other) {
		return this->a == other.a && this->b == other.b;
	};

	Point operator+(const Point& other) {
		return Point(this->a + other.a, this->b + other.b);
	}
	Point operator+=(const Point& other) {
		this->a += other.a;
		this->b += other.b;
		return *this;
	}
	Point& operator++() {// 생각해보기
		this->a++;
		this->b++;
		return *this;
	}
	Point operator++(int) {// 후인 연산자의 경우 피연산자에 int 대입
		this->a++;
		this->b++;
		return *this;
	}
	Point operator+(int other) {
		return Point(this->a+other, this->b);
	}


private:
	int a;
	int b;


};

Point operator+(int num, const Point& other)// 좌측 피연산자가 객체형태가 아닌 정수나 기본 자료형의 경우 클래스 내부에서 연산자 오버로딩이 불가
// 해당 클래스에서 포함 연관된 연산자가 아닌 개념이기 때문에
// 이 경우 main밖에서 따로 정의해줌. 매개 변수는 좌측 피연산자, 우측 피연산자
//하지만 클래스 밖 함수는 클래스 private 변수에 접근 불가 그래서 friend를 써줌
{
	return Point(other.a + num, other.b + num);
}

int main()
{
	Point p1(1, 2);
	Point p2(2, 3);
	Point p3;

	cout << "p1 == p2: " << (p1 == p2) << endl;

	cout << endl;

	p3 = p1 + p2;

	cout << "p1:";
	p1.getPoint();

	cout << "p2:";
	p2.getPoint();

	cout << "p3:";
	p3.getPoint();
	/*
	cout << "p1 + p3: ";
	(p1 + p3).getPoint();
	p1 += p2;
	cout << "p1:";
	p1.getPoint();

	p1 += p2 += p3;
	cout << "p1:";
	p1.getPoint();
	cout << "p2:";
	p2.getPoint();
	*/



	/*
	
	++p1;
	cout << "p1:";
	p1.getPoint();

	++(++p1);
	cout << "p1:";
	p1.getPoint();
	*/
	Point result;  // 생성자 호출
	result = p2++;
	cout << "result:";
	result.getPoint();

	Point p4 = p1 + 10;
	cout << "p4 :";
	p4.getPoint();

	Point p5 = 10 + p1;
	cout << "p5 :";
	p5.getPoint();
	return 0;
}