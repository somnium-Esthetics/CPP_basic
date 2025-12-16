#include <iostream>
#include <string>

using namespace std;

enum {
	FNUM_NONE,
	FNUM_TRI,
	FNUM_SQA,
	FNUM_TRI2,
	FNUM_RAM,
	FNUM_EXIT


};
class Figure {
private:
	int height=1;
	char shape='*';
public:
	Figure() {};
	virtual ~Figure() {};// 부모 클래스가 자식 클래스를 받는 경우 생성은 부모, 자식 객체 둘다 생성 but 소멸은 부모 객체만 소멸, 그래서 virtual을 써서 둘다 소멸시켜줌
public:
	void setter(int _height, char _shape) {
		this->height = _height;
		this->shape = _shape;
	 }
	int getHeight() {
		return this->height;
	}
	char getChar() {
		return this->shape;
	}

	virtual void draw() {};

};

class Triangle : public Figure {
public: 
	Triangle() {};
	 ~Triangle() {};
public:
	void draw()  override {
		for (int i = 0; i < this->getHeight(); i++) {
			for (int j = 0; j <= i; j++) {
				cout << this->getChar();
			}
			cout << endl;
		}
	}
};



class Sqaure : public Figure {
public:
	Sqaure() {};
	~Sqaure() {};
public:
	void draw()  override {
		for (int i = 0; i < this->getHeight(); i++) {
			for (int i = 0; i < this->getHeight(); i++) {
				cout << this->getChar();
			}
			cout << endl;
		}
	};
};



class Triangle_2 : public Figure {
public:
	Triangle_2() {};
	~Triangle_2() {};
public:
	void draw() override {
		for (int i = 0; i < this->getHeight(); i++) {
			for (int q = 0; q < this->getHeight() - i; q++) {
				cout << " ";
			}
			for (int j = 0; j < i * 2 + 1; j++) {
				cout << this->getChar();
			}
			cout << endl;
		}
	};
};


class Rammous : public Figure {
public:
	Rammous() {};
	~Rammous() {};
public:
	void draw() override {

		cout << "  " << this->getChar() << "  " << endl;
		cout << " " << this->getChar() << this->getChar() << this->getChar() << " " << endl;
		cout << this->getChar() << this->getChar() <<this->getChar() << this->getChar() << this->getChar() << endl;
		cout << " " << this->getChar() << this->getChar() << this->getChar() << " " << endl;
		cout << "  " << this->getChar() << "  " << endl;
	};

};

int main() {
	int f_num;
	/*
	Figure* f = new Sqaure();
	f->setter(5, '*');
	f->draw();
	*/



		
	while (true) {
		Figure* f = nullptr;
		cout << "그리고 싶은 도형을 고르세요" << endl;
		cout << "1.직각 삼각형 2. 사각형 3. 삼각형 4. 마름모 5. 종료" << endl;
		cout << "숫자를 입력하세요 :";
		cin >> f_num;
		switch (f_num) {
		case FNUM_TRI:
			f = new Triangle();
			break;
		case FNUM_SQA:
			f = new Sqaure();
			break;
		case FNUM_TRI2:
			f = new Triangle_2();
			break;
		case FNUM_RAM:
			f = new Rammous();
			break;
		case FNUM_EXIT:
			return 0;
			break;
		}
		f->setter(5, '#');
		f->draw();
	

		delete f;
		system("pause");
		system("cls");

	}


	return 0;
}
