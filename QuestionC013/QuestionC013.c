//C013-��һ������4���������ֽ�Ϊ������������֮��
//cuishuning 2020/11

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	unsigned n;
	(void)scanf("%u", &n);
	//����С�Ŀ��ܿ�ʼ��һ����
	//1+2+3....
	//2+3+4.....
	for (unsigned i = 1; i <= n / 2; i++)
	{
		int sum = 0;
		for (unsigned j = i; sum <= n; j++)
		{
			sum = sum + j;
			if (sum == n)  //��i��j���ǡ�õ���n
			{
				//����ĿҪ�������i��j֮�����
				printf("%d=%d", n, i);
				for (int k = i + 1; k <= j; k++)
				{
					printf("+%d", k);
				}
				printf("\n");
				break;
			}
		}
	}
	return 0;
}