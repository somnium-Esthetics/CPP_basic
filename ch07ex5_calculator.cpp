//ch07ex5_calculator.cpp
#include <iostream>
using namespace std;

class cal {

public:
	
	int count[4] = { 0 };
	 void add(int n1, int n2);
	 void sub(int n1, int n2);
	 void mul(int n1, int n2);
	 void div(int n1, int n2);
	 void display();
};


int main() {

	cal c1;
	c1.add(1, 4);
	c1.add(1, 2);
	c1.add(1, 1);
	c1.sub(5, 3);
	c1.sub(1, 3);
	c1.mul(3, 5);
	c1.div(4, 2);
	c1.div(0, 2);
	c1.div(4, 0);
	c1.display();



	return 0;
}

void cal::add(int n1, int n2) {
	count[0] += 1;
	cout << n1 << "+" << n2 << "=" << n1 + n2<<endl;
}
void cal::sub(int n1, int n2) {
	count[1] += 1;
	cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
}
void cal::mul(int n1, int n2) {
	count[2] += 1;
	cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
}
void cal::div(int n1, int n2) {
	
	if (n2 != 0) {
		count[3] += 1;
		cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
	}
	else {
		cout << n1 << "/" << n2 << "=¿¬»êºÒ°¡" << endl;
	}
}
void cal::display() {
	string title[4] = { "µ¡¼À","»¬¼À","°ö¼À","³ª´°¼À" };
	cout << "================================" << endl;
	cout << "¿¬»êº° È½¼ö" << endl;
	cout << "================================" << endl;
	for (int i = 0; i < 4; i++) {
		cout << title[i] << ":" << count[i] << "È¸" << endl;
	}

}