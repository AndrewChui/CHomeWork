/*������һ��8λ��ʮ����������
*��д����ȡ�����������м�4λ����
*�ֱ����ȡ������4λ���Լ���4λ������1024�ĵ�����
*���룺һ��������
*����������������ÿո�ָ���
* 
* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int eightDigitalInteger;
	(void)scanf("%d", &eightDigitalInteger);
	//ȡ���м�4λ����
	//Take out the middle 4 digits
	int midFour = (eightDigitalInteger / 100) % 10000;
	printf("%d %d\n", midFour, midFour + 1024);
	return 0;
}
