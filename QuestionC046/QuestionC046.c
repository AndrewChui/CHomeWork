/*������������ת��Ϊ��Ӧ��ʱ���֡��롣��ʾ��
�����ʱ����ʹ������ĸ�ʽ����������Ҫ��һ����
printf("%d:%.2d:%.2d\n", h, m, s)
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int totalSecond;
	(void)scanf("%d", &totalSecond);
	printf("%d:%.2d:%.2d\n", totalSecond / 3600,
		(totalSecond % 3600) / 60, totalSecond % 3600 % 60);
	return 0;
}