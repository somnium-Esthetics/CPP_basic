//ch04lab1_reference.cpp
/*

Reference
정수: 3
실수: 3.5
i: 3, d: 3.5

*/

#include <iostream>

using namespace std;

void input(int& i, double& d);

int main() {
	cout << "Reference" << endl;
	

	int i ;
	double d;


	input(i,d);
	cout << i << d;




	return 0;
}

void input(int& i, double& d) {

	cout << "정수: ";
	cin >> i;
	cout << endl;
	cout << "실수: ";
	cin >> d;



}
