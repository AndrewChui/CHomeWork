/*��дһ���������ж�һ���������Ƿ�Ϊ�������������򷵻�1�����򷵻�0��
��ν��������ָ��λ�������ҶԳƵ���������1221��3553�ȡ��ú�����ԭ��Ϊ��
int ispalindrome(int n);
���в���n�Ǵ��жϵ����������ú����з��ؽ����
��д���������������������в��ԣ����ҳ�1000��n(1000 �� n < 10000)֮������л�������
����С����Ĵ�������Ļ����ʾ�����ÿ����֮����һ���ո�ָ������һ��������û�пո�

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsPalindrome(int n);
int main()
{
	int n;
	(void)scanf("%d", &n);
	int firstNum = 0;

	for (int i = 1000; i <= n; i++)
	{
		if (IsPalindrome(i))
		{
			firstNum++ == 0 ? printf("%d", i) : printf("% d", i);
		}
	}
	return 0;
}

/// <summary>
/// �ж�һ����n�Ƿ��ǻ�����
/// </summary>
/// <param name="n">�����n</param>
/// <returns>���򷵻�1���񷵻�0</returns>
int IsPalindrome(int n)
{
	int resN = 0;
	int m = n;
	while (n)
	{
		resN = resN * 10 + n % 10;
		n /= 10;
	}
	return m==resN;
}
