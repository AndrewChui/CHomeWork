/*C013-��һ������4���������ֽ�Ϊ������������֮��

*Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	unsigned n;
	(void)scanf("%u", &n);
	//����С�Ŀ��ܿ�ʼ��һ����
	//Try one by one from the smallest possible
	//1+2+3....
	//2+3+4.....
	for (unsigned i = 1; i <= n / 2; i++)
	{
		unsigned sum = 0;
		for (unsigned j = i; sum <= n; j++)
		{
			sum = sum + j;
			//Adding from i to j is exactly equal to n
			if (sum == n) //��i��j���ǡ�õ���n
			{
				//����ĿҪ�������i��j֮�����
				//Output the number from i to j as required by the title
				printf("%d=%d", n, i);
				for (unsigned k = i + 1; k <= j; k++)
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
