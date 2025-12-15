#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main() {
	Person p1("È«±æµ¿", 9999);
	p1.print();

	Person p2 = p1;
	p2.print();

	cout << "-------------" << endl;

	Student s1("±èÃ¶¼ö", 20, "2024001");
	s1.print();
	s1.info();

	Student s2 = s1;
	s2.print();
	s2.info();
	
	Person p3 = s2;
	p3.print();

	return 0;

	return 0;
}