/*�ҳ�m��n֮�������ͬ������m < n����
˵����һ��������x���������ƽ������β�������xΪͬ������
���磬6����ƽ����36��β����2
5����ƽ����625��β������ô6��25����ͬ������
���룺
����m��n�������������ÿո�ָ���
�����
�������ͬ���������ݼ��ÿո�ָ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

/*
int IsomorphicNumber(int x, int xx);
int main()
{
	int m, n;
	
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		
		if (IsomorphicNumber(i, i * i))
		{
			if (firstNum == 0)
			{
				printf("%d", i);
				firstNum = 1;
			}
			else
			{
				printf(" %d", i);
			}
		}
		
	}
	return 0;
}

int IsomorphicNumber(int x, int xx)
{
	while (x && xx)
	{
		if (x % 10 != xx % 10)
		{
			return 0;
		}
		x = x / 10;
		xx = xx / 10;
	}
	return 1;
}

*/

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		int a = log10(i) + 1;
		if ((i*i)%(int)(pow(10,a))==i)
		{
			firstNum++ == 0 ? printf("%d", i) : printf(" %d", i);
		}
	}
	return 0;
}
