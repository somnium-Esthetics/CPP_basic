//ch04ex1_swap.cpp
#include <iostream>

using namespace std;

void swap(int* n1, int* n2);
void swap(int& n1, int& n2); //reference : 다른이름



int main() {

	int n1, n2;

	n1 = 10;
	n2 = 20;
	cout << "n1 : " << n1 << ", n2 : " << n2 << endl;

	swap(&n1, &n2);// &주소 연산자 &n1 --> 변수 n1의 실제 메모리 주소
	cout << "n1 : " << n1 << ", n2 : " << n2 << endl;
	
	swap(n1, n2);
	cout << "n1 : " << n1 << ", n2 : " << n2 << endl;

	return 0;
}

void swap(int* n1, int* n2) {// 선언부: *포인터: 주소를 저장하는 자료형
	int t = *n1;// 구현부 * 역참조
	*n1 = *n2;
	*n2 = t;

	
}

void swap(int& n1, int& n2) {

	int t = n1;
	n1 = n2;
	n2 = t;

}
