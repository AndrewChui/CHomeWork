/*���㺯����ֵ, nΪ������f(n)�������£�
��1���� n >= 0 �� n <= 4 ʱ��   f(n) = 1
��2���� n > 4 ��nΪż�� ʱ�� f(n) = f(n - 1) + f(n - 3)
��3���� n > 4 ��nΪ���� ʱ�� f(n) = f(n - 2) + f(n - 4)
��4��nΪ����ֵʱ�� f(n) = -1
�����Ա���n��������������
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int f(int n);

int main()
{
	int n, s;
	scanf("%d", &n);
	s = f(n);
	printf("%d\n", s);
	return 0;
}

int f(int n)
{
	int i;
	if (n >= 0 && n <= 4) i = 1;
	if (n > 4 && n % 2 == 0) i = f(n - 1) + f(n - 3);
	if (n > 4 && n % 2 == 1) i = f(n - 2) + f(n - 4);
	if (n < 0) i = -1;
	return i;
}