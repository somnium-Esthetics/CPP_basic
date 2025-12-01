//ch07ex9_삼각형클래스.cpp
#include <iostream>
/*
instance variable
int height
char shape

instance method
getter
setter
displayShape()

*/
#include <string>
using namespace std;

class Triangle {

public:
	Triangle(int _height, char _shape) {// 생성자
		
		set_height(_height);
		set_shape(_shape);
	}


private:
	int height;
	char shape = '\0';
	void get_height();
	void get_shape();

public: 
	void set_height(int _height);
	void set_shape(char _shape);

	void display();
};
int main() {
	Triangle t1(5, '*');
	t1.display();


	return 0;
}

void Triangle::get_height()
{
	cout << "삼각형의 높이 :" << height << endl;
}

void Triangle::get_shape()
{
	cout << "적용된 문자 :" << shape << endl;
}

void Triangle::set_height(int _height)
{
	if (_height < 0) {
		cout << "잘못된 값입니다" << endl;
	}
	else {
		height = _height;
	}
}

void Triangle::set_shape(char _shape)
{
	shape = _shape;
}

void Triangle::display()
{
	cout << "======================" << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << shape;
		}
		cout << endl;
	}
	get_height();
	get_shape();
}