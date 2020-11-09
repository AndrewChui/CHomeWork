/*
��n���������Լ����2<=n<50
���룺n������������0��Ϊ���Ľ������ÿո������
��������Լ������n��������һ���ո������
������
210 54 24 0
6 210 54 24
ע�������У���������ĸ����ǲ�ȷ���ģ�������50����С��2������0�ǽ�����־��
����У���1���������ǵ����Լ���������������n�������м���һ���ո������
cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum[50];
	int i = 0;
	do
	{
		(void)scanf("%d", &inputNum[i]);
	} while (inputNum[i++]);

	int gcd = inputNum[0];
	while (gcd > 1)
	{
		int flag = 0;
		for (int n = 0; n < i - 1; n++)
		{
			if (inputNum[n] % gcd)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			gcd--;
		}
		else
		{
			break;
		}
	}
	printf("%d", gcd);
	for (int n = 0; n < i - 1; n++)
	{
		printf(" %d", inputNum[n]);
	}

	return 0;
}
