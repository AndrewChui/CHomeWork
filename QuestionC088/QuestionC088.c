/*���ַ����ײ���* ��ȫ���Ƶ��ַ�����β����
�м�����* �ţ������м��* �Ų������ַ������Ȳ�����200.
����
*** street***** music***
street***** music******
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char starStr[200];
	(void)scanf("%s", starStr);
	
	int i = 0;
	while (starStr[i++] == '*');
	strcpy(starStr, starStr + i - 1);
	
	int len = strlen(starStr);
	for (int m = 0; m < i - 1; m++)
	{
		starStr[m + len] = '*';
	}
	starStr[len + i - 1] = 0;

	printf("%s", starStr);
	return 0;
}