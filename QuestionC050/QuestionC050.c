/*��д��������������ܷ񹹳������Σ����鷽�����������ߺ;�Ҫ���ڵ����ߡ�
*���� : ���߳���
*������������Թ��ɣ����YES���������ERROR DATA
*
* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);

	printf(a + b > c && b + c > a && c + a > b ? "YES" : "ERROR DATA");

	return 0;
}
