//ch01ex03_입출.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n = 13;
	cout << "10진수 " << n << endl;
	cout << "10진수 " << n << "은 8진수로 " << setbase(8) << n << "입니다." << endl;
	cout << "10진수 " << setbase(10) << n << "은 16진수로 " << setbase(16) << n << "입니다." << endl;
	
	printf("10진수 : %d는 16진수로 %x입니다.\n", n, n);
	printf("10진수 : %d는 16진수로 %X입니다.\n", n, n);
	cout << endl << endl;


	double f = 3.141592;
	cout << "PI는 " << f << "입니다." << endl;
	cout << "PI는 " << setprecision(3) << f << "입니다." << endl;
	cout << "PI는 " << setprecision(4) << f << "입니다." << endl;
	cout << "PI는 " << setprecision(5) << f << "입니다." << endl;
	printf("PI는 %.1f입니다", f);
	return 0;
}
