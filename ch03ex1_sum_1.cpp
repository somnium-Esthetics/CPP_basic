#include <iostream>

using namespace std;

int sum() {
	int s=0;
	for (int i = 1; i <= 10; i++) {
		
		s = s + i;
	}
	return s;
}

int sum(int x) {
	int s=0;
	for (int i = 5; i <= 10; i++) {
		
		s = s + i;
	}
	return s;
}

int sum(int b, int e) {
	int s =0;
	for (int i = b; i <= e; i++) {
		
		 s = s + i;
	}
	return s;
}

int sum(int* arr, int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return s;
}


int main()
{


	cout << "1부터 10까지 합: " << sum() << endl;
	cout << "5부터 10까지 합: " << sum(10) << endl;
	cout << "3부터 20까지 합: " << sum(3, 20) << endl;

	int arr[5] = { 10, 20, 30, 40, 50 };
	cout << "배열 arr의 합: " << sum(arr, 5) << endl;


	return 0;
}