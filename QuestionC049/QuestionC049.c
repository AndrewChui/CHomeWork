/*����һ����дӢ����ĸ�� ����������ڵ���ĸ��������ĸA - Z��������β��ӵĻ�״���У���
���� : ��дӢ����ĸ
��� : ����ĸǰ�����ĸ������ĸ������ĸ�������ĸ��������ĸ���޼����
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char uppercaseLetter;
	(void)scanf("%c", &uppercaseLetter);
	printf("%c%c%c", uppercaseLetter - 1 < 'A' ? 'Z' : uppercaseLetter - 1, uppercaseLetter,
		uppercaseLetter + 1 > 'Z' ? 'A' : uppercaseLetter + 1);
	return 0;
}