//ch01ex04_Ãâ·Â.cpp

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	for (int i = 1;i <= 30; i++)
	{
		cout << setw(5) << i;
		printf("%5d", i);
		if (i % 10 == 0) cout << endl;


	}


	return 0;
}
