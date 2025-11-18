//qhrtmq.cpp
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
	cout << "(" << p.x << "," << p.y << ")" << endl;

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
		cout << i+1 << "번째 좌표" << endl;
		display(p_s[i]);
	}
	cout << "===================" << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 거리" << endl;
		cout << "거리:" << getDist(p_s[i]) << endl;
	}
	cout<< "===================" << endl;

	int mx_num = 0;
	point my_point;

	for (int i = 0; i < n; i++) {
		int di;
		di = getDist(p_s[i]);
		if (di >= mx_num)
			mx_num = di;
		my_point = p_s[i];
	}
	cout << "원점에서 가장 먼 점:" << my_point.x << "," << my_point.y << endl;


	delete[] p_s;
	return 0;
}