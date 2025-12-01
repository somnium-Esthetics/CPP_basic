//ch07lab6_Triangle.cpp
#include <iostream>

using namespace std;

class Triangle {


private:
	double base;
	double height;

public:
	double getArea() const;
	void display() const;

public:
	Triangle(double _base, double _height) {
		if (_base < 0 || _height < 0) {
			base = 1;
			height = 1;
		}
		else {
			base = _base;
			height = _height;
		}


	}
};

int main() {
	Triangle t1(1.1, 2.2);
	t1.display();
	Triangle t2(-2, 13);
	t2.display();

	return 0;
}

double Triangle::getArea() const
{
	return base * height/2;
}

void Triangle::display() const
{
	cout << "»ï°¢ÇüÀÇ ³ÐÀÌ´Â" << getArea() << endl;
}
