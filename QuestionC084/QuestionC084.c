/*���������ַ�����ͳ�Ƶ�2���ַ��������ٺ�2�ַ���
�ڵ�1���ַ����г��ֵĴ�����û�г��֣�����Ϊ0.
���룺�����ַ������Կո�ָ���
��������ִ�����������
����1��
banana  an
2
����2��
bnnnn nn
3
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char in[500];
	char matchStr[20];

	scanf("%s%s", in, matchStr);
	int sum = 0;
	int i = 0;
	int j = 0;
	while (in[i])
	{
		int flag = 0;
		while (matchStr[j])
		{
			if (in[i] != matchStr[j])
			{
				flag = 1;
				break;
			}
			i++;
			j++;
		}
		flag == 0 ? sum++ : i++;
		j = 0;
	}
	printf("%d", sum);
	return 0;
}
