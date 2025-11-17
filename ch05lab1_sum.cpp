//ch05lab1_sum.cpp
/*
배열 arr의 합: 150
배열 합 구하기

*/

#include <iostream>

using namespace std;

int sumarr(int* ar);

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int ans = 0;
	for (auto& one : arr) {
		ans += one;
	}
	cout << "배열 arr의 합 :" << ans << endl;



	return 0;
}
//배열은 함수의 인자로 쓸 경우 auto 사용 불가!!
/*
int sumarr(int* ar) {
	int ans2 = 0;
	for (auto& one : ar) {
		ans2 += one;
	}
	return ans2;
}
*/
