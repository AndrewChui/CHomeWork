/*��д�������������3��С����
*����3��С����ӣ�����ӵĽ���Լ����������뷽��ת����������Ľ����ʾ�����
*���룺3��С�����ո�ָ���
*������ͣ�����������������1����ʾ���ո�ָ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);
	double sum = a + b + c;
	printf("%g %d", sum, (int)(sum + 0.5));
	return 0;
}