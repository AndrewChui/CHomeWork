/*��a + aa + aaa + aaaa + �� + aa...a��n����������aΪ1��9֮���������
���磺��a = 1, n = 3ʱ����1 + 11 + 111֮��Ϊ123��
���룺������е�����a������������n
�������ʽ�ͽ����

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, n;
	(void)scanf("%d%d", &a, &n);
	int sum = a;
	printf("%d", a);
	int aa = a;
	for (int i = 0; i < n - 1; i++)
	{
		a = a * 10 + aa;  //���Ƶõ���һ��
		printf("+%d", a);
		sum += a;   //�ۼ�
	}
	printf("=%d\n", sum);
	return 0;
}