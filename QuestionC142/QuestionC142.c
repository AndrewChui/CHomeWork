/*����N�������� / ��ĸ����ʽ����������������Щ�����ĺ͡�
�����ʽ����һ������һ��������N�� <= 100����Ȼ����һ��N����������a1 / b1 a2 / b2�������������еķ��Ӻͷ�ĸ���ڡ�int���ķ�Χ�ڡ�����и���������ű�������ڷ��ӵ�ǰ�档
�����ʽ����������ʽ�ĺͣ������� ���� / ��ĸ�������С��������Ǻ͵��������֣������ӡ� < ����ĸ�������Ӻͷ�ĸû�й������������������Ϊ0�����������С�����֡���������һ���������������������Һ���û�пո��磺
2
1 / 2 1 / 2
1
3
- 1 / 2 - 1 / 2 - 1 / 2
- 1 1 / 2

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct _frac
{
	int numerator; //����
	int denominator; //��ĸ
} Frac;

Frac Add(Frac x, Frac y);
int Gcd(int x, int y);

int main()
{
	int n;
	Frac sum = {0, 1};
	Frac x;
	(void)scanf("%d", &n);
	char ch;
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d%c%d", &x.numerator, &ch, &x.denominator);
		sum = Add(sum, x);
	}

	//���
	if (sum.numerator < 0)
	{
		printf("-");
		sum.numerator = -sum.numerator;
	}
	if (sum.denominator == 1)
	{
		printf("%d", sum.numerator);
	}
	else
	{
		if (sum.numerator > sum.denominator)
		{
			int integer = sum.numerator / sum.denominator;
			sum.numerator = sum.numerator
				- sum.denominator * integer;
			printf("%d %d/%d", integer, sum.numerator
			       , sum.denominator);
		}
		else
		{
			printf("%d/%d", sum.numerator, sum.denominator);
		}
	}
	return 0;
}

Frac Add(Frac x, Frac y)
{
	Frac z;
	z.denominator = x.denominator * y.denominator;
	z.numerator = x.denominator * y.numerator
		+ x.numerator * y.denominator;
	int gcd = Gcd(z.denominator, z.numerator);
	z.denominator = z.denominator / gcd;
	z.numerator = z.numerator / gcd;
	return z;
}

int Gcd(int x, int y)
{
	int gcd = x;
	while (x % gcd || y % gcd)
	{
		gcd--;
	}
	return gcd;
}
