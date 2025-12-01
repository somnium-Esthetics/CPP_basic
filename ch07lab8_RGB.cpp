//ch07lab8_RGB.cpp
#include <iostream>

using namespace std;
class RGB {
public:
	RGB(int _r,int _g, int _b) {
		if (validateColor(_r)) r = _r;
		else r = 0;
		
		if (validateColor(_g)) g = _g;
		else g = 0;
		
		if (validateColor(_b)) b = _b;
		else b = 0;
		};
private:
	int r;
	int g;
	int b;

public:
	bool validateColor(int col);//유효성 검사 함수
	void display() const;
};

int main() {

	
	RGB c1(255, 128, 64);
	c1.display();

	RGB c2(-10, 300, 50);
	c2.display();

	return 0;
}

bool RGB::validateColor(int col)
{
	/*
	if (col >= 0 && col <= 255)
	{
		return true;
	}
	else {
		return false;
	}
	
	*/
	return (col >= 0 && col <= 255);// 값 자체가 T/F
}

void RGB::display() const
{
	cout << "색상 :" << r << ", " << g << ", " << b << endl;
	printf("#%02X%02X%02X", r, g, b);// 16진수 표기법
	cout << endl;

}
