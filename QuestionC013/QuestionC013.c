//C013-��һ������4���������ֽ�Ϊ������������֮��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	unsigned n;
	(void)scanf("%u", &n);
	for (unsigned i = 1; i <= n / 2; i++)
	{
		int sum = 0;
		for (unsigned j = i; sum <= n; j++)
		{
			sum = sum + j;
			if (sum == n)
			{
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