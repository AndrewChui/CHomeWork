/*���ַ����������±꣨��0��ʼ�����ַ�˳��ߵ���
���ַ�12345678�����Ϊ18365472
���룺�ַ����������ո�
���������ַ�����

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[200] = { 0 };
	(void)scanf("%s", inputStr);

	int i = 1;
	int j = strlen(inputStr) - 1;

	if (j % 2 == 0)
	{
		j--;
	}

	while (j > i)
	{
		char temp = inputStr[i];
		inputStr[i] = inputStr[j];
		inputStr[j] = temp;
		i += 2;
		j -= 2;
	}
	printf("%s", inputStr);
	return 0;
}
