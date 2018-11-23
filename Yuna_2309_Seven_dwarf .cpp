#include<iostream>
using namespace std;

int main()
{
	cout << "Enter 9 numbers : ";
	int list[9];
	for (int i = 0; i < 9; i++) {
		cin >> list[i];
	}

	//입력한 수를 오름차순으로 정렬하기
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (list[j] < list[i]) {
				int temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}


	//합이 100이 되는 숫자들을 출력하기
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		sum = sum + list[i];
	}

	//배열 [0] ~[7]의 합이 100일때
	if (sum == 100) {
		for (int i = 0; i < 7; i++) {
			cout << list[i] << endl;
		}
	}

	//8번째나 9번째 배열 둘 중 하나만 출력할때
	else if (sum < 100) {
			for (int j = 7; j < 9; j++) {
				int temp = list[j];

				for (int a = 0; a < 7; a++) {
					if (100 == (temp + (sum- list[a]))) {
						for (int i = 0; i < 7; i++) {
							if (i == a)
								continue;
							cout << list[i] << endl;
						}
						cout << list[j] << endl;
					}
				}
			}

			//8번째와 9번째 둘다 출력해야 할때
			int temp1 = list[7];
			int temp2 = list[8];
			for (int a = 0; a < 7; a++) {
				for (int b = a + 1; b < 7; b++) {
					if (100 == (temp1 + temp2) + (sum- list[a] - list[b])) {
						for (int p = 0; p < 7; p++) {
							if (p != a && p != b) {
								cout << list[p] << endl;
							}
						}
						cout << temp1 << endl;
						cout << temp2 << endl;
					}
				}
			}
		}

	return 0;
}
