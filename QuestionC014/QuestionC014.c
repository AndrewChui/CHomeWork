//�ҳ�[m, n]��Χ����7�ı������7��ȫ����������m��nΪ��������

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		if (i % 7 == 0)
		{
			printf("%d��7�ı���\n", i);
		}
		int k = i;
		while (k)
		{
			if (k % 10 == 7)
			{
				printf("%d�Ǵ�7����\n", i);
				break;
			}
			k /= 10;
		}
	}
	return 0;
}