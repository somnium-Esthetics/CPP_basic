//ch06lab1_원점에서가장먼점.cpp
/*
사용자로부터 n개의 점의 좌표(x, y)를 입력받아 각 점의 좌표와  원점으로 부터 거리√(x² + y²)를 출력하고,
그 중 원점에서 가장 먼 점을 찾아서 출력하는 프로그램을 작성하시오. 점의 정보는 Point 구조체를 선언 사용하시오.



*/
#include <iostream>
#include <cmath>
using namespace std;
 
struct point {
	int x;
	int y;

};
void len(int* arr );//원점과의 거리 구하는 함수 + 최장거리 구하는 함수


int main() {
	int num = 0;
	
	cout << "저장할 좌표 수 :" << endl;
	cin >> num;
	int* point = new point[num*2];
	for (int i = 0; i < num; i++) {
		cout << "#" << i + 1 << endl;
		cout << "X: ";
		cin >> point[2*i+1];
		cout << endl;
		cout << "Y: ";
		cin >> point[2*i+2];
		cout << endl;
	}
	//point {1,2,3,4,5,6}
	len(point);

	

	return 0;
}
void len(int* arr) {
	cout << "==============" << endl;
	
	for (int i = 0; i < ; i++) {///제한
		cout << "(" << arr[2*i] << "," << arr[2*i+1] << endl;
		int ans = sqrt((arr[2 * i] * arr[2 * i]) + (arr[2 * i + 1] * arr[2 * i + 1]));
		cout << "두 점 사이의 거리 : "<<ans<<endl;
	
	}



}