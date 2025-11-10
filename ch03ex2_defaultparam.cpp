//ch03ex2_defaultparam.cpp
//sum 디폴트 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int sum(int begin = 1, int end = 10);// 디폴트값은 선언부에만 


int main() {

	cout << sum() << endl;
	cout << sum(5) << endl;
	cout << sum(20,30) << endl;

	


	return 0;
}


int sum(int begin,int end) {
	int cnt = 0;
	for (int i = begin; i <= end; i++) {
		cnt += i;

	}

	return cnt;

}