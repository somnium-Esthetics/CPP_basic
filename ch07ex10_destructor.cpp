//ch07ex10_destructor.cpp
#include <iostream>

using namespace std;


class Dest {
private:
	int n1;
	int n2;
	int* arr = nullptr;

public:
	Dest(int _n1, int _n2) :n1(_n1), n2(_n2) {
		cout << "持失切" << n1 << ", " << n2 << endl;
		arr = new int[_n1];
		for (int i = 0; i < _n1; i++) {
			arr[i] = i + 1;
		}
		show_arr();
		cout << endl;
	};


public: 
	~Dest() {
		cout << "社瑚切" << n1 << ", " << n2 << endl;
		delete[] arr;
	}

public:
	void show_arr() {
		for (int i = 0; i < n1; i++) {
			cout<<arr[i]<<" ";
		}
	}

};

void func(int a, int b) {
	Dest d2(a, b);
}

int main() {
	Dest d1(1, 1);
	func(99,99);
	{
		Dest d3(3, 3);
		func(4,4);
	}
	Dest d5(5, 5);

	return 0;
}