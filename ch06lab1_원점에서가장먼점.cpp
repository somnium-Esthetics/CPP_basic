//ch06lab1_원점에서가장먼점.cpp

#include <iostream>
#include <cmath>
using namespace std;

struct point
{
	int x;
	int y;

};

void display(point p) {// 좌표출력
	cout << "(" << p.x << "," << p.y <<")" << endl;

};

double getDist(point p) {// 거리측정
	double d;
	d = sqrt(double(p.x * p.x + p.y * p.y));
	return d;
}

int main() {
	cout << "저장할 좌표의 수 :";
	int n;
	cin >> n;
	point* p_s = new point[n];
	for (int i = 0; i < n; i++) {
		cin >> p_s[i].x;
		cin >> p_s[i].y;
	 }
	int m_dist = 0;
	for (int i = 0; i < n; i++) {
		display(p_s[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << "거리:"<<getDist(p_s[i])<<endl;
	}
	delete[] p_s;
	return 0;
}

