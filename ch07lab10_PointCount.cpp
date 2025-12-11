//ch07lab10_PointCount.cpp
#include <iostream>
#include <string>

using namespace std;

class Point {
public:
	Point(int _a, int _b):a(_a), b(_b) {
		p_count++;
	}
	Point(Point& other) {//복사 생성자. 원래는 자동 생성 but static 변수 count 용으로 제작

		this->a = other.a;
		this->b = other.b;
		p_count++;
	}

private:
	int a;
	int b;
	static int p_count;

public:
	string getPoint();
	static int getPointCount();
	double distance(Point& other);

};

int Point:: p_count = 0;// static 초기화 필수

int main()
{
	Point p1(3, 5);
	Point p2(1, 2);
	Point p3 = p1;

	cout << p1.getPoint() << endl;
	cout << p2.getPoint() << endl;
	cout << p3.getPoint() << endl;

	cout << Point::getPointCount() << endl;

	cout << p1.distance(p2) << endl;
	cout << p1.distance(p3) << endl;

	return 0;
}

string Point::getPoint()
{
	return "a:"+to_string(a)+" b:"+to_string(b);
}

int Point::getPointCount()
{
	return p_count;
}

double Point::distance(Point& other)//other
{
	return sqrt((a-other.a)*(a-other.a)+(b-other.b)*(b-other.b));
}
