/*��̣�����ͬʱ�ڵ�һ������͵ڶ��������е�ȫ��Ԫ�ء�
������������a��Ԫ�ظ���������������a�ĸ���Ԫ�ص�ֵ��������������b��Ԫ�ظ�����
����������b�ĸ���Ԫ�ص�ֵ�����ͬʱ�����������ȫ��Ԫ�ء�
�������룺
3
1 2 3
5
1 3 5 7 9
���������
1 3
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100], b[100];
	int an, bn;
	scanf("%d", &an);
	for (int i = 0; i < an; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &bn);
	for (int i = 0; i < bn; i++)
	{
		scanf("%d", &b[i]);
	}

	int ab[100];
	int abn = 0;
	for (int i = 0; i < an; i++)
	{
		for (int j = 0; j < bn; j++)
		{
			if (a[i] == b[j])
			{
				ab[abn++] = a[i];
			}
		}
	}

	for (int i = 0; i < abn; i++)
	{
		i == 0 ? printf("%d", ab[i]) : printf(" %d", ab[i]);
	}
	return 0;
}