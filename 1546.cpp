//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, point;
//	cin >> n; // �Է¹��� n ����
//
//	int m = 0;
//	double sum = 0;
//
//	// n�� ���� ��, point�� ������, m�� ������� ���� ���� �� �ְ���, sum�� ���� �������� ��
//	for (int i = 0; i < n; ++i) { // ���⿡�� �ݺ��� �ȿ� int i int����������!
//		cin >> point; //point ����
//		sum = sum + point;
//		if (m < point)
//			m = point; //�ݺ��� �ȿ��� point�� �����ϸ鼭 m�� ���ϸ� ���� -> ũ�� m�� ���Ӱ� ����!
//
//	}
//	
//	sum = (sum / m * 100)/n;
//	// (������1/m*100 + ������2/m*100 + ... + ������n/m*100)/n -> /m*100�� ������ �����!
//	cout << sum;
//
//}