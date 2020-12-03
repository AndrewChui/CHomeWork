/*������ĸ�����ֺͿո���ɵ��ַ�����
��ȡ�ַ����е�������������ַ����еķ������ַ���Ϊ�ָ����
������ݼ���Ӣ�Ķ��ŷָ���ĩβû�ж��š�
������������ֵ�����ַ�����û������ʱ�������NO����������ַ������Ȳ�����80��
�����ʽ��ռһ�У������ַ�����
�����ʽ��ռ���С�
��һ�У������ݼ���һ��Ӣ�Ķ��ŷָ����ڶ��У����ǵĺ�ֵ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int SplitString(char str[], char ch, char r[][100]);
int Convert(char str[]);

int main()
{
	char inStr[1000];
	gets_s(inStr, 1000);
	int i = 0;
	while (inStr[i])
	{
		if (!(inStr[i] >= '0' && inStr[i] <= '9'))
		{
			inStr[i] = '*';
		}
		i++;
	}
	char splitStr[100][100];
	int m = SplitString(inStr, '*', splitStr);
	if (m == 0)
	{
		printf("NO");
		return 0;
	}
	int num[100];
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		num[i] = Convert(splitStr[i]);
		sum += num[i];
	}
	printf("%d", num[0]);
	for (int i = 1; i < m; i++)
	{
		printf(",%d", num[i]);
	}
	printf("\n%d", sum);
	return 0;
}

int SplitString(char str[], char ch, char r[][100])
{
	int i = 0;
	int m = 0;
	int n = 0;
	while (str[i] == ch && str[i] != 0)
	{
		i++;
	}
	while (str[i] != 0)
	{
		while (str[i] != ch && str[i] != 0)
		{
			r[m][n] = str[i];
			n++;
			i++;
		}
		r[m][n] = 0;
		m++;
		n = 0;
		while (str[i] == ch && str[i] != 0)
		{
			i++;
		}
	}
	return m;
}

int Convert(char str[])
{
	int n = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		n = n * 10 + (str[i] - '0');
	}
	return n;
}
