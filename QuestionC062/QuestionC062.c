/*��n��������С��������2 <= n < 10��
���룺n������������0��Ϊ���Ľ������ÿո������
�������С����������n��������һ���ո������
������
210 54 24 0
7560 210 54 24
ע�������У���������ĸ����ǲ�ȷ���ģ�������10����С��2������0�ǽ�����־��
����У���1���������ǵ���С�������������������n�������м���һ���ո������

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
	int lcm = inputNum[0];
	while (1)
	{
		int flag = 0;
		for (int n = 1; n < i - 1; n++)
		{
			if (lcm % inputNum[n] )
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			lcm=lcm+inputNum[0];
		}
		else
		{
			break;
		}
	}
	printf("%d", lcm);
	for (int n = 0; n < i - 1; n++)
	{
		printf(" %d", inputNum[n]);
	}

	return 0;
}
