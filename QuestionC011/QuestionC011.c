/*����ж�����һ����������λ����֮������������ż����
*������������1��ż�����0
*
*Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x);
	int sum = 0;
	//�ֽ�x��ÿһλ�����
	//Decompose each bit of x and add
	while (x)
	{
		sum += x % 10;
		x /= 10;
	}

	printf("%d", sum % 2 == 0 ? 0 : 1);
	return 0;
}
