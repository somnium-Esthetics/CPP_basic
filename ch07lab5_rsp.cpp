//ch07lab5_rsp.cpp
#include<iostream>
#define GAME_CNT 3
#define ROCK 1
#define SCISSOR 2
#define PAPER 3
/*
* c u
1r 2r
2s 3s
3p 4p

1 비김
2나 -1 짐
0나 3 이김
user
*/
using namespace std;
//enum 사용
class RSP {
public:
	void start_game();
private:
	int user=0;
	int com;
	int count[3] = { 0 };// 승리 비김 짐user 
	
	void getCom();// 컴퓨터 값 입력
	int getUser();// 유저의 값 입력
	void checkUser_(); //가위 바위 보 진행


};

int main() {
	RSP player;

	player.start_game();


	return 0;
}

void RSP::start_game()
{
	getCom();
	
	checkUser_();

}

void RSP::getCom()
{

	com = rand() % 3 + 1;

}

int RSP::getUser()
{
	int user_choose;
	cout << "바위(2), 가위(3), 보(4) 를 입력하세요 : " << endl;
	cin >> user_choose;
	return user_choose;
}

void RSP::checkUser_()

{
	string rsp[] = { "", "가위","바위","보" };//사용하기
	user=getUser();
	cout << "com :" << com << "   you: " << user << endl;
	if (user - com == 1) {//비긴 경우
		cout << "비겼습니다." << endl;
		count[1]++;
	}
	else if (user - com == 2&& -1) {// 진 경우
		cout << "패배했습니다." << endl;
		count[2]++;

	}
	else if (user - com == 0 && 3) {//이긴 경우
		cout << "승리했습니다." << endl;
		count[0]++;
	}
}

//string rsp[] = {"", "가위","바위","보"}
//rsp[com]
