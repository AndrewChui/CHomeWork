/*��д���򣬰����й�����������ַ�����
���������һ���ַ����������������ַ�����
���ٳ����������ַ�..., �����������ַ�����
������ַ������Ȳ�����100��
���룺һ���ַ���
������ո���������ַ�������һ���ո�����
�������������
student
t nt ent dent udent tudent student

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	(void)scanf("%s", str);
	int maxi = strlen(str) - 1;
	printf("%s", str + maxi);
	for (int i = 1; i <= maxi; i++)
	{
		printf(" %s", str + maxi - i);
	}
	return 0;
}
