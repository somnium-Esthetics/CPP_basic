//ch04lab2_pointer.cpp
/*
Pointer
정수: 10
실수: 20.33
i: 10, d: 20.33

*/

#include <iostream>

using namespace std;

void Pointer(int* pi, double* pd);// 포인터로 받음

int main() {
	cout << "Pointer" << endl;
	int n1;
	double n2;

	Pointer(&n1,&n2); // &주소 연산자 !!!!
	cout << n1 <<"  "<<  n2;


	return 0;
}


void Pointer(int* pi, double* pd) {// 포인터
	cout << "정수: ";
	cin >> *pi; // 역참조 -> 포인터가 갖는 실제 값
	cout<< endl;
	
	cout << "실수 :";
	cin >> *pd;//역참조
	cout << endl;

}
