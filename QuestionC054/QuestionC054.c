/*��һ�����������£� 2 / 1, 3 / 2, 5 / 3, 8 / 5, 13 / 8, 21 / 13, �� 
*����һ��ķ�ĸΪǰһ��ķ��ӣ�����ķ���Ϊǰһ��������ĸ֮�ͣ�����ǰn��֮�͡�
*���룺����n��������
*�����ǰn��֮�ͣ�ʵ����ע������4λС����
* 
* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int numerator = 2;
	int denominator = 1;
	double sum = (double)numerator / denominator;
	int n;
	(void)scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		int temp = denominator;
		denominator = numerator;
		numerator += temp;
		sum += (double)numerator / denominator;
	}
	printf("%.4lf", sum);
	return 0;
}
