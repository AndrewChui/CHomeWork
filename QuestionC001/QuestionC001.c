/*�Ӽ�������һ��С�ڵ���1000��������x��
*�����ƽ������Ϊ��������������������1000��
*�����0��������������һ������ֱ��С�ڵ���1000��
*����ʾ��ʹ����ƽ��������sqrt��Ҫ����<math.h>ͷ�ļ�����

* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x); //���������� input a Positive integer
	while (x > 1000)
	{
		printf("0\n");
		(void)scanf("%u", &x); //������һ������ Accept next input
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}
