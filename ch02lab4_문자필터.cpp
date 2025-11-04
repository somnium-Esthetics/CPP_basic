//ch02lab4_문자필터.cpp
//문자열: pitca computer institute
//검색할 문자 : t

//pitca computer institute
//** t******* t***** t* t* t*


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sen;
	cout << "문자열:";
	getline(cin, sen);


	char ch;
	cout << "검색할 문자:";
	cin >> ch;
	cout << "\n" << sen<< "\n";
;
	for (int i = 0; i < sen.length(); i++)
	{
		if (sen.at(i) == ch) {
			cout << ch;

		}
		else
			cout << "*";

	}


	return 0;
}