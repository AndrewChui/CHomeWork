/*�Ӽ�������һ��λ��������20λ���޷��Ŷ���������������ת��Ϊʮ���ơ�
���룺����������
�������Ӧ��ʮ��������

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char inputBinaryString[20];
	(void)scanf("%s", inputBinaryString);
	int x = 0;

	int i = 0;
	while (inputBinaryString[i])
	{
		x = x * 2 + inputBinaryString[i++] - '0';
	}

	printf("%d", x);
	return 0;
}