//ch04lab3_stringadd.cpp
/*
stringAdd(st1, st2, st3)
st3 <- st1+st2

*/
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;

void stringAdd(char* st1, char* st2, char* st3);


int main() {

	char st1[10] = "hello";
	char st2[10] = "pitca";
	char st3[30];

	stringAdd(st1, st2, st3);

	cout << st3;




	return 0;
}

void stringAdd(char* st1, char* st2, char* st3) {

	
	
	strcpy(st3, st1);
	strcat(st3, st2);



}