/*��д��������������ܷ񹹳������Σ����鷽�����������ߺ;�Ҫ���ڵ����ߡ�
���� : ���߳���
������������Թ��ɣ����YES���������ERROR DATA
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{	
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b)
	{
		printf("YES");
	}
	else
	{
		printf("ERROR DATA");
	}
	return 0;
}
