/*������һ��8λ��ʮ����������
*��д����ȡ�����������м�4λ����
*�ֱ����ȡ������4λ���Լ���4λ������1024�ĵ�����
*���룺һ��������
*����������������ÿո�ָ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int eightDigitalInteger;
	(void)scanf("%d", &eightDigitalInteger);
	int midFour = (eightDigitalInteger / 100) % 10000; //ȡ���м�4λ
	printf("%d %d\n", midFour, midFour + 1024);
	return 0;
}