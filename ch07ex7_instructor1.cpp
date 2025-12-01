//ch07ex7_instructor1.cpp


#include <iostream>
#include <string>
using namespace std;
// 클래스 객체 생성시 자동으로 시행되는 함수
// 클래스와 동일한 이름
//객체 생성시 자동으로 유효성 검사 가능
//

class Bread {

public:
	/*Bread() {//생성자
		cout << "Bread 1 Constructor!" << endl;
		set_material("피넛");
		set_order(1);
	}

	Bread(string _mat) {//생성자 오버로딩
		cout << "Bread 2 Constructor!" << endl;
		set_material(_mat);
		set_order(1);
	}
	Bread(string _mat, int num) {//생성자 오버로딩
		cout << "Bread 3 Constructor!" << endl;
		set_material(_mat);
		set_order(num);
	}*/
	//위임 생성자
	Bread() : Bread("생크림",1) {}
	Bread(string _mat) : Bread(_mat,1) {}
	Bread(string _mat, int num) {//생성자 오버로딩, 위임 생성자를 위한 본체
		cout << "Bread 3 Constructor!" << endl;
		set_material(_mat);
		set_order(num);
	}
	/*
	Bread(string _mat="생크림", int num=1) {
		cout << "Bread 3 Constructor!" << endl;
		set_material(_mat);
		set_order(num);
	}
	처럼 직접 초기화도 가능
	*/

	
	void set_material(string _mat);
	void set_order(int _num);
	void get_material();
	void get_order();
	void display();
private:
	
	string material;
	int order;

};

int main() {

	Bread b1;
	Bread b2("생크림");
	Bread b3("생크림", 3);

	b1.display();
	b2.display();
	b3.display();


	return 0;
}

void Bread::set_material(string _mat)
{
	material = _mat;
}

void Bread::set_order(int _num)
{
	order = _num;
}

void Bread::get_material()
{
	cout << "재료 :" << material << endl;
}

void Bread::get_order()
{
	cout << "개수 :" << order << endl;
}

void Bread::display()
{
	get_material();
	get_order();
}
