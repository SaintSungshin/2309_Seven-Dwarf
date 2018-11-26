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
	//재이: 배열 돌릴때 1과 23456789를 비교하ㅏ고 2와 3456789를 비교하고 ... 이런 식으로 하는 거 맞죠?
	//재이: 그럼 첫번재 for문 돌릴 때 i의 범위가 i<8 아닌가요??
	//재이: i=8인 상황에서 다음 for문의 j는 8+1인 9가 되는데 이는 j의 범위인 j<9과 대응되지 않습니다.
	//재이: i=7(i<8)까지로 범위를 수정해야 j=8까지로 범위에 알맞게 되지 않나 싶습니다.
	//재이: 제 말 무슨 뜻인지 이해 됩니까 유나씨?
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
	//재이: 이게 왜 합이 100 출력입니까? 그냥 7번째 항까지 다 더하는 거 아닙니까??
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
