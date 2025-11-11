#include <iostream>
#include <string>

using namespace std;

string upperCase(string m);
void lowerCase(string& m);
//string getId(string& ma);
//string getHost(string& ma);

int main() {

	string name = "PITCA";
	string msg = "Hello, Ccp!!";
	string mail = "welcome@pitca.co.kr"; // id : welcome    host : pitca.co.kr로 나누기

	string id;
	string host;
	int div_n = mail.find('@');
	id = mail.substr(0, div_n);
	cout << id << endl;

	host = mail.substr(div_n + 1);
	cout << host << endl;


	cout << name + msg << endl;
	cout << (name == msg) << endl;

	cout << name.length() << endl;

	cout << name.at(0) << endl;
	cout << name[0] << endl;

	name[0] = 'A';
	cout << name << endl;

	cout << msg.find(" ") << endl;
	cout << upperCase(msg);
	cout << endl;

	lowerCase(msg);
	

	//string upperMsg = upperCase(msg)  --> HELLO, CCP!!
	//isupper(), tolower

	return 0;
}

string upperCase(string m) {
	//string msg = "Hello, ccp!!";
	for (int i = 0; i < m.length(); i++) {
		if (islower(m[i])) {
			m[i] = toupper(m[i]);

			
		}
		else
		{
			
		}
	}

	return m;

}

void lowerCase(string& m) {
	for (int i = 0; i < m.length(); i++) {
		if (isupper(m[i])) {
			cout << (char)tolower(m[i]);
			//tolower(m[i]);
			//cout << m[i];
		}
		else
		{
			cout << m[i];
		}
	}

}
/*

string getId(string& ma) {
	string ID;
	c
	for (int i = 1; i < div_n; i++) {
		ID[i - 1] = ma[i - 1];
	}

	return ID;
}
string getHost(string& ma) {
	string Host;
	int div_n = ma.find('@');
	for (int j = div_n+1, int i =0; j <= ma.length(); j++, i++) {
		Host[i] = ma[j];
	}
	return Host;
}


*/
