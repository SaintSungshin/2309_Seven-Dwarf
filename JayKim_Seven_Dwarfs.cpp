#include<iostream>
using namespace std;

/*7명의 난재이의 키의 합은 100이라는 점을 이용.
9명 키의 합에서 100을 빼고, 두 명씩 더해서 그 값이 나오면
두 난쟁이의 키 값을 0으로 설정.
배열을 오름차순으로 정렬하고 앞에서 두 번째부터 출력*/

int main()
{
	const int SIZE = 9;
	int list[SIZE];
	int total = 0;

	for (int i = 0;i < SIZE;i++) //9개의 난쟁이 키를 받고 total에 모두의 합을 저장
	{
		cin >> list[i];
		total += list[i];
	}
	int minusValue = total - 100; //추가된 난쟁이들의 키의 합을 구함
	
	for (int i = 0;i < SIZE-1;i++) // 두 명씩 더해서 munusValue값이 나오면 그 두명의 키(배열) 값을 0으로 설정.
	{
		for (int j = i+1 ;j < SIZE;j++)
		{
			if ((list[i] + list[j]) == minusValue)
			{
				list[i] = 0; 
				list[j] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < SIZE-1; i++)// 오름차순~^^
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (list[i] > list[j])
			{
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	for (int i = 2; i < SIZE; i++)// 앞에 0 두개를 뺐으니까 걔네 빼고 출력!
	{
		cout << list[i] << endl;
	}
	system("pause");
	return 0;
}