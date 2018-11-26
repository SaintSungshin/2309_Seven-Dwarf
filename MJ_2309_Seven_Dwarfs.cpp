#include <iostream>
using namespace std;

int main(){

	const int MAX = 9;
	int list[MAX];
	int total = 0;

	//입력 즉시 총합 구하기
	for (int i = 0; i < MAX; i++) {
		cin >> list[i];
		total += list[i];
	}

	//오름차순
	int m, n, temp, tmp;

	for (int m = 0; m < MAX - 1; m++) {
		for (int n = m + 1; n < MAX; n++) {
			if (list[m] > list[n]) {
				temp = list[m];
				list[m] = list[n];
				list[n] = temp;
			}
		}
	}

	//거를 놈 구하기, 출력
	int remainder = total - 100;

	int a, b, i, j;
	for (i = 0; i < MAX; i++) {
		for (j = MAX - 1; j > i; j--) {
			if (list[i] + list[j] == remainder) {
				list[i] = 0;
				list[j] = 0;
			}
		}
	}
	for (i = 0; i < MAX; i++) {
		if (list[i] != 0)
			cout << list[i] << endl;
	}

	system("pause");
	return 0;
}