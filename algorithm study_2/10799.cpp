#include<iostream>
#include<string>
using namespace std;


int main() {
	string input;
	cin >> input;
	
	int result = 0;
	int cnt_pipe = 0;


	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) == ')' && input.at(i - 1) == '(') {
			result += cnt_pipe;
		}
		else if (input.at(i) == '(') {
			cnt_pipe++;
		}
		else {
			result++;
			cnt_pipe--;
		}

		cout <<"result " << result << endl;
	}

	cout << result << endl;


	return 0;
}