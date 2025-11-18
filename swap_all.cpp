//swap_all.cpp
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

void swapc(int& n1, int& n2);
void swapc(double& d1, double& d2);
void swapc(char* arr1, char* arr2);

int main() {
	int a = 1;
	int b = 3;
	swapc(a, b);
	cout << a << "," << b << endl;

	double d_1 = 1.1;
	double d_2 = 2.2;
	swapc(d_1, d_2);
	cout << d_1 << "," << d_2 << endl;

	char s1[10] = "ABCCC";
	char s2[10] = "ABC";
	swapc(s1, s2);
	cout << s1 << "," << s2 << endl;

	
	return 0;
}
void swapc(int& n1, int& n2) {

	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;


}

void swapc(double& d1, double& d2) {

	double temp = 0;
	temp = d1;
	d1 = d2;
	d2 = temp;

}

void swapc(char* arr1, char* arr2) {
	char* temp =new char[strlen(arr1)+1];// strlen 문자열의 길이 반환
	strcpy(temp, arr1);
	strcpy(arr1, arr2);
	strcpy(arr2, temp);
	delete[] temp;

}