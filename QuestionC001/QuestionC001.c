/*�Ӽ�������һ��С�ڵ���1000��������x��
�����ƽ������Ϊ��������������������1000��
�����0��������������һ������ֱ��С�ڵ���1000��
����ʾ��ʹ����ƽ��������sqrt��Ҫ����<math.h>ͷ�ļ�����

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x);  //����������
	while (x > 1000)
	{
		printf("0\n");
		(void)scanf("%u", &x);  //������һ������
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}
