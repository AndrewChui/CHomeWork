//C052 - �������ֽ�Ϊ1�͸��������ӵ����
//cuishuning 2020/11

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i;
	(void)scanf("%d", &n);

	printf("1");
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)  //������
		{
			printf("*%d", i);
			n = n / i;
		}
	}
	return 0;
}