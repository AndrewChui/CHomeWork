//������㡣��������һ��������Y���Լ���һ��������N��
//��һ���ո�ָ��������Y�꿪ʼ��ĵ�N����������һ��
//�����Y���������꣬��Y֮��ĵ�һ��������Y����
//cuishuning 2020/11
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsLeapyear(int year);

int main()
{
	int year, n;
	(void)scanf("%d%d", &year, &n);
	int i = 0;
	while (i < n)
	{
		if (IsLeapyear(year))
		{
			i++;
		}
		year++;
	}

	printf("%d", year - 1);
	return 0;
}

/// <summary>
/// �ж��Ƿ�Ϊ����
/// </summary>
/// <param name="year">���</param>
/// <returns>�ǣ�����1����0</returns>
int IsLeapyear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
