/*ȥ���ַ����еĿո��ַ������Ȳ�����200.
���룺���ո���ַ�����
����������ո���ַ�����
������
Washington hosts Chinese folklife festival
WashingtonhostsChinesefolklifefestival
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char blankString[200];
	char noBlankString[200];
	gets(blankString);
	
	int i = 0, j = 0;
	while (blankString[i])
	{
		blankString[i] == ' ' ? i++ : (noBlankString[j++] = blankString[i++]);
	}
	noBlankString[j] = 0;
	
	printf("%s\n", noBlankString);

	return 0;
}