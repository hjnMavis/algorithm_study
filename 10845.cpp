#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;  // 첫 번째 줄에서 입력해주는 명령의 수 N을 선언/저장

	queue<int> q;
	int numloc; // 정수를 담는 큐를 만들고 그 위치를 출력해줄 위치변수 하나를 저장

	for (int i = 0; i < N; i++) {
		string givenstr;
		cin >> givenstr; // 명령어를 나누어서 동작시키기 위한 문자열 변수 생성

		if (givenstr == "push") {
			int givennum;
			cin >> givennum;
			q.push(givennum); // 만약 명령어가 push 라면 push 동작 수행

		}
		else if (givenstr == "pop") {
			if (q.size() != 0) {
				numloc = q.front(); // 만약 큐가 비어있지 않다면 위치 저장 변수를 해당 인덱스로 저장
				q.pop();
			}
			else {
				numloc = -1; // 만약 큐가 비어있다면 -1 저장
			}
			cout << numloc << '\n'; // 저장된 인덱스넘버나 -1을 출력
		}
		else if (givenstr == "size") {
			cout << q.size() << '\n'; // 큐의 사이즈 출력
		}
		else if (givenstr == "empty") {
			if (q.size() == 0) {
				numloc = 1;
			}
			else {
				numloc = 0;
			}
			cout << numloc << '\n'; // 만약 큐의 사이즈가 0이라면 1, 아니라면 0 출력
		}
		else if (givenstr == "front") {
			if (q.size() == 0) {
				numloc = -1;
			}
			else {
				numloc = q.front();
			}
			cout << numloc << '\n'; // 큐의 사이즈가 0이면 -1, 아니라면 front가 위치해 있는 넘버를 출력
		}
		else if (givenstr == "back") {
			if (q.size() == 0) {
				numloc = -1;
			}
			else {
				numloc = q.back();
			}
			cout << numloc << '\n'; //큐의 사이즈가 0이면 - 1, 아니라면 back이 위치해 있는 넘버를 출력

		}
	}
}