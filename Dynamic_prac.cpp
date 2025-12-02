//prac_ver
#include <iostream>

using namespace std;

/*




*/
class DynamincInt {
public:
	DynamincInt(int _size) {
		_size > 0 ? size=_size : 1;
		arr = new int[size];

	}
	~DynamincInt() {
		delete[] arr;
	}

public:
	int get_size();
	void setAt(int index, int number);
	void getAT(int index);
	void random(int a, int b);
	void display()const;
	void setSize(int _newsize);



private:
	int size;
	int* arr= nullptr;
	int* temp = nullptr;

};
int main() {

	DynamincInt d1(5);
	d1.random(100, 500);
	d1.display();
	cout << endl;
	d1.setAt(2, 99);
	d1.getAT(2);
	d1.display();
	cout << endl;
	cout << d1.get_size() << endl;
	d1.setSize(3);
	d1.display();
	cout << endl;
	d1.setSize(9);
	d1.display();




	return 0;
}
int DynamincInt::get_size()
{
	return size;
}

void DynamincInt::setAt(int index, int number)
{
	if (index >= 0 && index < size)
		arr[index] = number;
}

void DynamincInt::getAT(int index)
{
	cout << arr[index] << endl;
}

void DynamincInt::random(int a, int b)
{
	if (a > b) {
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % (a - b + 1) + b;
		}
	}
	else {
		for (int i = 0; i < size; i++) { arr[i] = rand() % (b - a + 1) + a; }
		

	}
}

void DynamincInt::display() const
{
	for (int i = 0; i < size;i++) {
		cout << arr[i] << " ";
}
}

void DynamincInt::setSize(int _newsize)
{
	if (_newsize < size) {//새 크기가 작을때
		temp = new int[_newsize];
		for (int i = 0; i < _newsize; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
		size = _newsize;

	}
	else {
		temp = new int[_newsize];
		for (int i = 0; i < _newsize;i++) {
			temp[i] = 0;
		}
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
		size = _newsize;

	}
}
