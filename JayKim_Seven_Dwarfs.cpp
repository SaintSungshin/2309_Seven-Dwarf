#include<iostream>
using namespace std;

/*7���� �������� Ű�� ���� 100�̶�� ���� �̿�.
9�� Ű�� �տ��� 100�� ����, �� �� ���ؼ� �� ���� ������
�� �������� Ű ���� 0���� ����.
�迭�� ������������ �����ϰ� �տ��� �� ��°���� ���*/

int main()
{
	const int SIZE = 9;
	int list[SIZE];
	int total = 0;

	for (int i = 0;i < SIZE;i++) //9���� ������ Ű�� �ް� total�� ����� ���� ����
	{
		cin >> list[i];
		total += list[i];
	}
	int minusValue = total - 100; //�߰��� �����̵��� Ű�� ���� ����
	
	for (int i = 0;i < SIZE-1;i++) // �� �� ���ؼ� munusValue���� ������ �� �θ��� Ű(�迭) ���� 0���� ����.
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

	for (int i = 0; i < SIZE-1; i++)// ��������~^^
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

	for (int i = 2; i < SIZE; i++)// �տ� 0 �ΰ��� �����ϱ� �³� ���� ���!
	{
		cout << list[i] << endl;
	}
	system("pause");
	return 0;
}