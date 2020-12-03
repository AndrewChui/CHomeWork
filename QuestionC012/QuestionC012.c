/*��������¼���ǰn��֮�ͣ�
*s = 1 - 1 / 3 + 1 / 5 - 1 / 7 + ...
*
*Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//Number of items in the series
	int n; //����������

	(void)scanf("%d", &n);
	//Sum of series
	double s = 1; //�����ĺ�

	int sign = -1; //������

	for (int i = 1; i < n; i++)
	{
		s += sign * 1 / (2 * (double)i + 1);
		sign = -1 * sign; //�����ŷ�ת
	}
	printf("%lf", s);
	return 0;
}
