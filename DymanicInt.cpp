//Dynamic
#include <iostream>
//#include <iomanip>

using namespace std;

class DynamicInt {
public:
	DynamicInt(int _size): size(_size) {
		arr = new int[size];

	}
	~DynamicInt() {
		delete[] arr;
	}
private:
	int size;
	int* arr = nullptr;

public:
	void add_val() {
		for (int i = 0; i < size;i++) {
			arr[i] = (i + 1) * 10;
		}
	}
	void get_val() {
		for (int i = 0; i < size;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void random(int a, int b) {//a~b 사이의 난수를 넣기
		for (int i = 0; i < size; i++) {
			//srand((unsigned)time(NULL));
			if (a < b) {
				arr[i] = rand() % (b - a+1) + a;
			}
			else {
				arr[i] = rand() % (a - b+1) + b;
			}
		
		}

	}
	int get_size() {

		return size;
	}
};

int main() {
	//int x=10;
	//cout << setw(6) 6자리로<< setfill('0') 0으로 채우고 << hex 16진수 << x<< endl;

	DynamicInt d1(5);// 크기 5
	DynamicInt d2(10); // 크기 10
	DynamicInt d3(15);// 크기 15
	/*
	* d1.add_val();
	d2.add_val();
	d3.add_val();
	*/

	d1.random(100, 200);
	d2.random(1,6);
	d3.random(6,2);
	d1.get_val();
	d2.get_val();
	d3.get_val();
	cout << d1.get_size() << endl;
	cout << d2.get_size() << endl;
	cout << d3.get_size() << endl;
	return 0;
}