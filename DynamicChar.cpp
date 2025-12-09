#include <iostream>

//string 이랑 char의 혼용 불가한지
//strcmp, strcpy, strcat

using namespace std;


class DynamicChar {
public:
	DynamicChar(int _size) : size(_size>=1 ? _size:1){
		str = new char[size];
		cout << "DynamicChar Constructor" << endl;
	}
	~DynamicChar() {
		delete[] str;
		cout << "DynamicChar 소멸자" << endl;
	}
public:
	void setAt(int _index, char _letter);
	char getAt(int _index);
	void setString(const char* setStr);//
	char* getString();
	int getLength();
	void display(int _num);
	void randUpper();
	int getlen( const char* _str);

private:
	int size;
	char* str = nullptr;

};


int main() {
	//DynamicChar dc(10);
	//dc.setAt(0, 'a');
	//dc.setAt(3, 'b');
	//dc.setAt(5, 'c');
	//cout<< dc.getAt(0)<<endl;
	//cout<< dc.getAt(3)<<endl;
	//cout<< dc.getAt(5)<<endl;
	//dc.setString("hello");
	//cout<< dc.getString()<<endl;
	//cout << "dc 문자열 수: " << dc.getLength() << endl;
	//dc.display(5);
	//dc.display(50);
	
	//dc.display(9);

	DynamicChar ucase(20);
	ucase.randUpper();
	cout<<ucase.getString() << endl;
	
	cout<<ucase.getlen("dynamicChar") <<endl;


	return 0;
}

void DynamicChar::setAt(int _index, char _letter)
{
	if (_index <= size) {
		str[_index] = _letter;
	}
	else {
		cout << "잘못된 사용입니다" << endl;
	}
}

char DynamicChar::getAt(int _index)
{
	return str[_index <= size? _index:0];
}



void DynamicChar::setString(const char* setStr)
{
	int length = 0;
	for (length = 0; setStr[length] != '\0'; length++);

	if (length >= size) length = size - 1;

	for (int i = 0; i < length;i++) {
		setAt(i, setStr[i]);
	}
	setAt(length, '\0');
	
}

char* DynamicChar::getString()
{
	return str;
}

int DynamicChar::getLength()
{
	int strLen = 0;
	for(strLen=0; str[strLen]!='\0';strLen++)
	return strLen;
}

void DynamicChar::display(int _num)
{
	if (_num > size) {// 숫자가 배열보다 큰 경우
		
		for (int i = 0; i < size;i++) {
			cout << str[i];
		}	
		cout << endl;
		cout << "숫자가 큰경우" << endl;
	
	}
	
	else {// 출력 숫자가 배열보다 작은경우
		for (int i = 0; i < _num;i++) {
			cout << str[i];
		}
		cout << endl;
		cout << "숫자가 작은경우" << endl;
	

		


	}
	
}

void DynamicChar::randUpper()
{
	srand(unsigned(time(NULL)));
	char r;// char 로 받으면 아스키 코드와 문자열을 숫자연산으로 사용가능!!!
	for (int i = 0; i < size; i++) {

		r = rand() % ('Z' - 'A' + 1) + 'A';
		setAt(i,r);
	}
	setAt(size-1, '\0');


}
//rand% (500 - 100 +1) +100
//rand% (B - A +1) +A;   A~B사이의 난수 



int DynamicChar::getlen( const char* _str)// _str의 문자열의 길이 반환
{
	int _strlen = 0;
	for (_strlen = 0; _str[_strlen] !='\0';_strlen++);
	return _strlen;
}
