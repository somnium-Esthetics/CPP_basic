//두 정수 입력: 5 10
//5 + 6 + 7 + 8 + 9 + 10 = 45
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int sm = 0;

	cout << "두 정수 입력 :";
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{ 
		sm = sm + i;

		if (i < b)
			
			cout << i << "+";
			
		else
			
			cout << i << "=";
	}

	cout << sm;
		
		

	return 0;
}
