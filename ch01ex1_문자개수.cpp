#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cnt = 0;

	string st;
	st = "C++ is a high-level, general-purpose programming language created by Danish computer scientist Bjarne Stroustrup";
	cout << st << endl;

	char ch;
	cout << "검색할 문자: "; //c
	cin >> ch;
	char ch2;//C
	if (isupper(ch))//대문자인가
		ch2 = tolower(ch);
	else
		ch2 = toupper(ch);

	for (int i = 0; i < st.length();i++)
	{
		if (st.at(i) == ch || st.at(i) == ch2) cnt++;//at는 문자열의 순번

	}

	cout << endl;
	cout << "문자" << ch << "는 " << cnt << "자 있다." << endl;

	return 0;
}
