/*��������һ���������������λ���ֵ�ƽ���͡��磺1234 �򣺼���1 * 1 + 2 * 2 + 3 * 3 + 4 * 4 = 30
���룺һ����������
���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x);
	int sum = 0;
	while (x)
	{
		sum = sum + (x % 10) * (x % 10);
		x = x / 10;
	}
	printf("%d", sum);
	return 0;
}