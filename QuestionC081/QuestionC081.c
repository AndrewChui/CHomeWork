/*��д���򣬰����й�����������ַ�����
���������һ���ַ����������������ַ�����
���ٳ����������ַ�..., �����������ַ�����
������ַ������Ȳ�����100��
���룺һ���ַ���
������ո���������ַ�������һ���ո�����
�������������
student
t nt ent dent udent tudent student
*/


#include<stdio.h>
char* strrev(char* str);
int main()
{
	char str[100];
	scanf("%s", str);
	int maxi = strlen(str)-1;
	printf("%s", str+maxi);
	for (int i = 1; i <= maxi; i++)
	{
		printf(" %s",str+maxi-i);
	}
	return 0;
}
