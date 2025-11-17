//ch05lab2_product.cpp
/*
제품 데이터를 저장하는 product 구조체를 생성하여 출력하는 코드를 작성하시오. (제품 정보의 출력은 printProduct()함수를 생성해 작성하시오.)
이름
단가
수량
총액
*/
#include <iostream>
#include <string>

using namespace std;



struct prd {
	string name;
	int price;
	int num;
	int wh_num;


};

void printProduct(prd rp);



int main() {

	prd p1 = { "키보드", 12000, 100, 31000 };
	prd p2 = { "마우스", 1300, 150, 1000 };
	prd p3 = { "모니터", 1000, 60, 91000 };

	prd p_s[3] = {
		p1,
		p2,
		p3

	};
	
	for (auto& one : p_s) {
		printProduct(one);

	}

	return 0;
}

void printProduct(prd rp) {
	cout << "제품명 : " << rp.name << endl;
	cout << "단가 : " << rp.price << endl;
	cout << "수량 : " << rp.num << endl;
	cout << "총액 : " << rp.wh_num << endl;

}