/*��д����Ҫ����һ���ַ����в����������ִ�������һ���ַ���
����ʾ�����ڵĿ�ʼ�±�ʹ�����
(������������ַ���ֹһ��������ǰ���ַ�)
���룺һ���ַ���
��������������ַ�����������ʼ�±�

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char in[200];
	scanf("%s", in);
	//��ʼʱ����������������ַ��ǵ�һ���ַ�
	char maxch = in[0];
	int maxi = 0; //���ִ���������±�
	int max = 1; //���ֵĴ���

	int i = 1; //ѭ�������±�
	//��ǰ���±�ʹ���ͳ��
	int currenti = 0;
	int currentMax = 1;
	char currentChar = in[0];
	while (in[i])
	{
		while (in[i] == currentChar)
		{
			currentMax++;
			i++;
		}
		//�滻
		if (currentMax > max)
		{
			max = currentMax;
			maxi = currenti;
			maxch = currentChar;
		}
		currentMax = 0;
		currentChar = in[i];
		currenti = i;
	}

	printf("%c %d %d", maxch, max, maxi);
	return 0;
}
