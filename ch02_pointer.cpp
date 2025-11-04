//ch02_pointer.cpp
#include <iostream>

using namespace std;

void printArr(int* pArr, int size)
//void printArr(int pArr[], int size)
{
	for (int i = 0; i < size; i++){

		cout << *(pArr + i) << " ";
		//cout << pArr[i]<< " ";
	
	}
	cout << endl;

}




int main() {

	int n = 5;
	int* pN; //선언 시 * 포인터

	cout << n << endl;
	cout << &n << endl; // int n 의 메모리 주소

	pN = &n;// 포인터에 메모리 주소를 할당
	cout << pN << endl;

	*pN = 10; // *역참조 연산자
	cout << n << endl;

	int arr[5] = { 1,2,3,4,5 }; // arr = &arr[0]
	printArr(arr, 5);
	cout << arr;



	return 0;
}