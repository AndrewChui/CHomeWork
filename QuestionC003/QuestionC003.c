/*��ȡ3������1~10��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������Ӣ���Ǻ�("""" * """")��
���룺3��������3�С�
�����3���Ǻš�

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int one, two, three;
	(void)scanf("%d%d%d", &one, &two, &three);
	for (int i = 0; i < one; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < two; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < three; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
