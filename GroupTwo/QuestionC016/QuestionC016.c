/*������������a, b, c���� a ^ 2 + b ^ 2 = c ^ 2����������һ�鹴������(^ 2��ʾƽ����a ^ ��ʾa��ƽ��)��
��д�������������[m, n]�еĹ�����������(��һ�鹴��������a < b < c)������[1, 10]�еĹ�������(3, 4, 5)��(6, 8, 10)����[1, 10]�й�����������Ϊ2.
���룺������m, n, m, n > 0.
�����[m, n]�еĹ�����������
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int i, j, k, m, n;
	int sum = 0;
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			for (k = j + 1; k <= n; k++)
				if (k * k == i * i + j * j)
				{
					sum++;
				}

	printf("%d\n", sum);
	return 0;
}
