//ch01ex1_학생정보.cpp
#include <iostream>
#include <string> //cpp 문자열 처리함수

using namespace std;

int main()
{
	string name;
	//char subject[30];
	char grade;
	int age;
	string adress;

	cout << "이름:";
	cin >> name;
	cout << "\n";
	cout << "학점:";
	cin >> grade;
	cin.ignore();//엔터 기호 제거, char 사용할때만 해당
	cout << "\n";


	cout << "주소:";
	getline(cin, adress);//공백있는 문자열을 받을때 사용
	//cin >> adress; // 공백있는 문자열은 공백 뒤 못받음

	cout << "\n";
	cout << "나이:";
	cin >> age;
	cout << "\n";
	cout << name << "학생(" << age << ")" << endl;
	cout << "주소:" << adress << endl;




	return 0;
}