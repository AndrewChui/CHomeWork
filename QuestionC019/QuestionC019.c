/*����һ����������������������ӵĺ͡�
*���磬12�������Ӻ�Ϊ2 + 2 + 3 = 7������������������ֱ����ʾ0.
*���룺������
*����������ӵ���ͱ��ʽ���Ӻź͵Ⱥ���Ӣ�ķ��š�

* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	//�Ƿ��ǵ�һ��������
	//Is it the first prime factor
	int isFirst = 0;

	int i = 2;
	while (n > 0 && i <= n)
	{
		//ֻҪ�ܱ�������iһ����������
		//As long as it can be an integer, i must be a prime factor
		if (n % i == 0)
		{
			if (isFirst == 0)
			{
				//���������һ������
				//input number is a prime
				if (i == n)
				{
					printf("0");
					return 0;
				}
				printf("%d", i);
				isFirst++;
			}
			else
			{
				printf("+%d", i);
			}
			sum += i;
			n = n / i;
			//����i++�������Ե�ǰ��i�Ƿ��������ӣ�ע���ظ���������
			//Skip i++ to continue testing whether the current 
			//i is still a prime factor, 
			//pay attention to repeated prime factors
			continue;
		}
		i++;
	}
	printf("=%d\n", sum);
	return 0;
}
