/*����һ����������������������ӵĺ͡�
���磬12�������Ӻ�Ϊ2 + 2 + 3 = 7������������������ֱ����ʾ0.
���룺������
����������ӵ���ͱ��ʽ���Ӻź͵Ⱥ���Ӣ�ķ��š�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	int isFirst = 0;
	int i = 2;
	while (n > 0 && i <= n)
	{
		if (n % i == 0)
		{
			if (isFirst == 0)
			{
				if (i == n)
				{
					printf("0");
					return 0;
				}
				printf("%d", i);
				isFirst++;
			}
			else
			{
				printf("+%d", i);
			}
			sum += i;
			n = n / i;
			continue;
		}
		i++;
	}
	printf("=%d\n", sum);
	return 0;
}