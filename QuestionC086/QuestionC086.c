/*��д����ȥ���ַ���ĩβ������Ǻš�
������Ǻţ�* �����ַ�����n��ʹ�ַ���β����* �Ų��ö���n����
������n������ɾ�������* �ţ������ڻ����n����
��ʲôҲ�������ַ����м��ǰ���* �Ų�ɾ����
�ַ����ĳ��Ȳ�����200���ַ����е��Ǻ���Ӣ���Ǻš�
���룺һ���ַ�����һ���Ǹ��������м��ÿո������
�����ȥ������* �ŵ��ַ�����

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[200] = {0};
	(void)scanf("%s", str);
	int len = strlen(str);

	//��λ�����һ���ַ�
	int m = len - 1;
	//�����β��*
	while (str[m--] == '*');

	int n;
	(void)scanf("%d", &n);
	if (len - m - 2 > n)
	{
		str[m + 2 + n] = 0;
	}

	printf("%s", str);
	return 0;
}
