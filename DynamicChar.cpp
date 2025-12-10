//DynamicChar.cpp
//동적할당 문자열 클래스
/*
setChar(index, char) - 인덱스에 문자 할당
setStr(string) - 문자열 대입, 기존 문자열 삭제 후 대입

getChar(index) - 인덱스 문자 반환
getStr() - 전체 문자열  반환
getLength() - 전체 문자열 길이 반환

*/
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
using namespace std;

class DynamicChar {
public:
	DynamicChar(int _size) : size(_size>=2?_size:10){
		cout << "constructor" << endl;
		arr = new char[size];

	}
	~DynamicChar() {
		cout << "destructor" << endl;
		delete[] arr;
	}

private:
	char* arr = nullptr;
	int size;

public:
	void setChar(int _index, char letter);
	void setString(const char* strings);//char배열이므로 string 자료형을 매개 변수로 받기 힘듦, const??
	char getChar(int _index);
	void getStr();
	int getLength();
	void randUpper();
};

int main() {
	srand(unsigned(time(NULL)));
// 난수 시드는 main에서 한번 돌려주는게 좋음
	DynamicChar d1 (15) ;
	d1.setChar(0, 'a');
	d1.setChar(2, 'b');
	d1.setChar(4, 'c');
	cout<< d1.getChar(0)<<endl;
	cout<< d1.getChar(2)<<endl;
	cout<< d1.getChar(4)<<endl;

	d1.setString("hello");
	cout << d1.getLength()<<endl;
	d1.getStr();

	DynamicChar ucase(20);
	ucase.randUpper();
	ucase.getStr();


	return 0;
}

void DynamicChar::setChar(int _index, char letter)
{
	if (_index < size - 1) {
		arr[_index] = letter;
	}
	else {
		cout << "잘못된 값" << endl;
		//return

	}
}

void DynamicChar::setString(const char* strings)
{
	int len = strlen(strings);
	if (len <= size) {
		strcpy(arr, strings);
		arr[size-1] = '\0';
	}
	else {
		cout << "문자열 길이 초과" << endl;
	}
}

char DynamicChar::getChar(int _index)
{
	if (_index < size - 1) {
		return arr[_index];
	}
	else {
		return 'X';
	}


}

void DynamicChar::getStr()
{
	for (int i = 0; arr[i] != '\0'; i++) {
		cout << arr[i];
	}
	cout << endl;
}

int DynamicChar::getLength()
{
	return strlen(arr);
}

void DynamicChar::randUpper()//배열의 길이만큼 랜덤 대문자 넣기
{
	for (int i = 0; i < size - 1; i++) {
		arr[i] = rand() % ('Z' - 'A'+1)  + 'A'; //문자열을 숫자 처럼 연산에 사용 가능!! 중요
	}
	arr[size - 1] = '\0';

}
//rand% (500 - 100 +1) +100
//rand% (B - A +1) +A;   A~B사이의 난수 

//중요. 동적할당으로 만들어진 배열은 sizeof로 배열의 크기를 알수 없다
//동적 할당 배열은 기본적으로 배열 자체를 선언하지 않고 포인터를 선언 배열과 연결시킴
//따라서 sizeof()안에 배열을 넣으면 배열이 아닌 포인터로 인식함
//sizeof()를 사용해 배열의 크기를 알수 있는 상황은
//1. main안에서 배열 자체를 선언하고(int arr [10];) main 안에서 크기를 알아보는 경우
//2. 함수 내부에서 배열 자체를 선언하고(int arr [10];) 함수 내부에서 알아보는 경우
//동적char 배열에는 문자열 종결자를 무조건 수동 기입해줘야함