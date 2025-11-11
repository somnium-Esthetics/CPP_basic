//n1, n2 값 바꾸기

#include <iostream>

using namespace std;


void point(int* p_A, int* p_B);
void ref(int& R_A, int& R_B);

int main() {
	int n1 = 10;
	int n2 = 38;
	cout << n1 <<" " << n2;
	cout << endl;

	point(&n1, &n2);
	cout << n1 <<" "<< n2;
	cout << endl;

	ref(n1, n2);

	cout << n1 <<" " << n2;
	cout << endl;


	return 0;
}

void point(int* p_A, int* p_B) {
	int t;
	t = *p_A;
	*p_A = *p_B;
	*p_B = t;


}
void ref(int& R_A, int& R_B) {

	int t;
	t = R_A;
	R_A = R_B;
	R_B = t;

}


