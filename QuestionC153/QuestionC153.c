/*��������n��2n�������������Ϊ����������С��������
�����Ϊż�������Ӵ�С����n������12��
���룺����n��2n��������
�������Ҫ����������������Կո������
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < 2 * n; i++)
	{
		scanf("%d", &a[i]);
	}
	//����ð��
	for (int i = 1; i < 2 * n - 1; i += 2)
	{
		for (int j = 2 * n - 1; j > i; j -= 2)
		{
			if (a[j] > a[j - 2])
			{
				int temp = a[j];
				a[j] = a[j - 2];
				a[j - 2] = temp;
			}
		}
	}

	//ż��ð��

	for (int i = 0; i < 2 * n - 2; i += 2)
	{
		for (int j = 2 * n - 2; j > i; j -= 2)
		{
			if (a[j] < a[j - 2])
			{
				int temp = a[j];
				a[j] = a[j - 2];
				a[j - 2] = temp;
			}
		}
	}

	//���
	printf("%d", a[0]);
	for (int i = 1; i < 2 * n; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
