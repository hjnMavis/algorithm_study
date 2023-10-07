//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, point;
//	cin >> n; // 입력받은 n 저장
//
//	int m = 0;
//	double sum = 0;
//
//	// n은 과목 수, point는 원점수, m는 현재까지 받은 점수 중 최고점, sum는 과목 점수들의 합
//	for (int i = 0; i < n; ++i) { // 여기에서 반복문 안에 int i int빼먹지말것!
//		cin >> point; //point 저장
//		sum = sum + point;
//		if (m < point)
//			m = point; //반복문 안에서 point를 저장하면서 m과 비교하며 덧셈 -> 크면 m에 새롭게 저장!
//
//	}
//	
//	sum = (sum / m * 100)/n;
//	// (원점수1/m*100 + 원점수2/m*100 + ... + 원점수n/m*100)/n -> /m*100을 밖으로 묶어내자!
//	cout << sum;
//
//}