#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) { //테스트 케이스 갯수 반복
		string str;
		getline(cin, str); //띄워쓰기 포함 저장

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

				prev = i + 1; //마지막 단어의 경우 스페이스바가 없어서 출력되지 않음


			}
			
			

		}



		
	}


}