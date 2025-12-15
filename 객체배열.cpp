//객체 배열
#include <iostream>
#include <string>

using namespace std;

class Point {
public:
	Point() {
		cout << "생성자 1" << endl;
	};
	Point(int x, int y):x(x),y(y) {
		cout << "생성자 2" << endl;
	}
	~Point() {};
private://멤버 변수
	int x;
	int y;

public://메서드
	string getPoint();




};
int main() {
	/*
	Point arr2[3] = { Point(),Point(7,7),Point(1,2) };
	for (int i = 0; i < 3; i++) {
		cout<< arr2[i].getPoint()<<endl;
	}
	*/

	Point* pp = new Point[4];// 포인터 객체 배열 동적 할당
	cout << pp[0].getPoint() << endl; // 포인터의 값 접근
	cout << (pp + 0)->getPoint() << endl;// 포인터로 값 접근 -> 사용

	delete[] pp;

	return 0;
}

string Point::getPoint()
{
	return "x:"+to_string(x) + " y:" + to_string(y);
}
