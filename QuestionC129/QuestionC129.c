/*����һ�����ܴ��ո��ַ����ַ���(���Ȳ�����200)��
ͳ�����и���Ӣ����ĸ�ĳ��ִ����������ִ�Сд��
�����ĸa��z�ĳ��ִ��������ݼ���Ӣ�Ķ��ŷָ�����Ӣ����ĸ��ͳ�ơ�
���룺���ܴ��ո���ַ�����
�����26����������Ӣ�Ķ��ŷָ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[200] = { 0 };
	gets(inputStr);
	strupr(inputStr);
	int count[26] = { 0 };

	int i = 0;
	while (inputStr[i])
	{
		if (inputStr[i] >= 'A' && inputStr[i] <= 'Z')
		{
			count[inputStr[i] - 'A']++;
		}
		i++;
	}

	printf("%d", count[0]);
	for (i = 1; i < 26; i++)
	{
		printf(",%d", count[i]);
	}
	return 0;
}
