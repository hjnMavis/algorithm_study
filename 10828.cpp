#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) { //�׽�Ʈ ���̽� ���� �ݺ�
		string str;
		getline(cin, str); //������� ���� ����

		int prev = 0;
		stack<char> st;
		for (int i = 0; i <= str.size(); i++) {
			if (str[i] == ' ' || i == str.size()) {
				for (int j = prev; j < i; j++) {
					st.push(str[j]);
				}

				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}

				cout << " ";

				prev = i + 1; //������ �ܾ��� ��� �����̽��ٰ� ��� ��µ��� ����


			}
			
			

		}



		
	}


}