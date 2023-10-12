#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;  // ù ��° �ٿ��� �Է����ִ� ����� �� N�� ����/����

	queue<int> q;
	int numloc; // ������ ��� ť�� ����� �� ��ġ�� ������� ��ġ���� �ϳ��� ����

	for (int i = 0; i < N; i++) {
		string givenstr;
		cin >> givenstr; // ��ɾ ����� ���۽�Ű�� ���� ���ڿ� ���� ����

		if (givenstr == "push") {
			int givennum;
			cin >> givennum;
			q.push(givennum); // ���� ��ɾ push ��� push ���� ����

		}
		else if (givenstr == "pop") {
			if (q.size() != 0) {
				numloc = q.front(); // ���� ť�� ������� �ʴٸ� ��ġ ���� ������ �ش� �ε����� ����
				q.pop();
			}
			else {
				numloc = -1; // ���� ť�� ����ִٸ� -1 ����
			}
			cout << numloc << '\n'; // ����� �ε����ѹ��� -1�� ���
		}
		else if (givenstr == "size") {
			cout << q.size() << '\n'; // ť�� ������ ���
		}
		else if (givenstr == "empty") {
			if (q.size() == 0) {
				numloc = 1;
			}
			else {
				numloc = 0;
			}
			cout << numloc << '\n'; // ���� ť�� ����� 0�̶�� 1, �ƴ϶�� 0 ���
		}
		else if (givenstr == "front") {
			if (q.size() == 0) {
				numloc = -1;
			}
			else {
				numloc = q.front();
			}
			cout << numloc << '\n'; // ť�� ����� 0�̸� -1, �ƴ϶�� front�� ��ġ�� �ִ� �ѹ��� ���
		}
		else if (givenstr == "back") {
			if (q.size() == 0) {
				numloc = -1;
			}
			else {
				numloc = q.back();
			}
			cout << numloc << '\n'; //ť�� ����� 0�̸� - 1, �ƴ϶�� back�� ��ġ�� �ִ� �ѹ��� ���

		}
	}
}