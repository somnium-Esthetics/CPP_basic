//ch07lab5_rsp.cpp
//ch07lab5_rsp.cpp
#include<iostream>
#define GAME_CNT 3
#define ROCK 1
#define SCISSOR 2
#define PAPER 3


using namespace std;
//enum 사용
class RSP {
public:
	void start_game();// 게임 시작
private:
	int user = 0;
	int com;
	int count[3] = { 0 };// 승리 비김 짐user 

	void getCom();// 컴퓨터 값 입력
	int getUser( );// 유저의 값 입력
	void checkUser_(); //가위 바위 보 진행
	void replay();


};

int main() {
	RSP player;

	player.start_game();


	return 0;
}

void RSP::start_game()
{
	getCom();// 컴 값 초기화

	checkUser_();

}

void RSP::getCom()
{

	com = rand() % 3 + 1;

}

int RSP::getUser()
{
	int user_choose;
	cout << "바위(1), 가위(2), 보(3) 를 입력하세요 : " << endl;
	cin >> user_choose;
	return user_choose;
}

void RSP::checkUser_()

{
	cout << "===================================" << endl;
	string rsp[] = { "", "바위","가위","보" };//사용하기
	user = getUser();
	cout << "com :" << com << "   you: " << user << endl;
	if (user==com) {//비긴 경우
		cout << "com: " << rsp[com] << endl;
		cout << "user: " << rsp[user] << endl;
		cout << "비겼습니다." << endl;
		count[1]++;
	}
	else if ((user ==ROCK&& com==PAPER)||(user==SCISSOR&&com ==ROCK)||(user==PAPER&&com==SCISSOR)) {// 진 경우
		cout << "com: " << rsp[com] << endl;
		cout << "user: " << rsp[user] << endl;
		cout << "패배했습니다." << endl;
		count[2]++;

	}
	else if( (user==ROCK&&com==SCISSOR)||(user==SCISSOR&&com==PAPER)||(user==PAPER&&com==ROCK)) {//이긴 경우
		cout << "com: " << rsp[com] << endl;
		cout << "user: " << rsp[user ] << endl;
		cout << "승리했습니다." << endl;
		count[0]++;
	}
	cout << "다시 하시겠습니까? (O,X)" << endl;
	replay();
}

void RSP::replay()
{
	char rp;
	cin >> rp;
	if (rp == 'o' || rp == 'O') {
		checkUser_();
	}
	else {
		cout << "게임이 끝났습니다." << endl;
		cout << "결과를 산출합니다." << endl;
		cout << "승리 : " << count[0] << "회" << endl;
		cout << "비김 : " << count[1] << "회" << endl;
		cout << "패배 : " << count[2] << "회" << endl;
	}
}
