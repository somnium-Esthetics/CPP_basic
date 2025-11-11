//ch04ex4_book.cpp
#include <iostream>
#include <string>

using namespace std;

struct book {//구조체 : class랑 비슷한 개념
	string title;
	string author;
	int pages;
	int price;

};

void display(book& t);
int main() {

	book b = { "cpp","Pitca",300., 30000 };
	cout << "제목 :" << b.title << endl;
	cout << "저자 :" << b.author << endl;
	cout << "페이지 :" << b.pages << endl;
	cout << "가격 :" << b.price << endl;


	book bs[3]{// book 객체들의 모임.
		b,
		{"java","com",350,39990},
		{"python","pitca",320,30090}

	};
	cout << endl;
	cout << endl;
	for (int i = 0; i < 3; i++) {
		display(bs[i]);
	}


	return 0;

}

void display(book& t) {
	cout << "제목 :" << t.title << endl;
	cout << "저자 :" << t.author << endl;
	cout << "페이지 :" << t.pages << endl;
	cout << "가격 :" << t.price << endl;
	cout << "=============================" << endl;

}