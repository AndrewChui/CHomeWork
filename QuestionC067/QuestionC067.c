/*д������������λ�ֽڸ�ʽ��
�磬���û�����82668634ʱ��
����Ӧ�����82, 668, 634��
���룺������
�������λ�ֽ��ʽ��
������
82668634
82, 668, 634

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	char num[200];
	int i = 0;

	while (n)
	{
		if ((i + 1) % 4 == 0) //�Ӷ��ŵ�λ��
		{
			num[i++] = ',';
		}
		num[i++] = n % 10 + '0'; //����ת�ַ�
		n = n / 10;
	}

	for (int j = i - 1; j >= 0; j--) //�������
	{
		printf("%c", num[j]);
	}
	return 0;
}
