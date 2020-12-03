/*���빫Ԫ��ݺ��·ݣ�������·ݵ�������
*���룺�꣬�£����ŷָ���
*���������

* Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int IsLeapyear(int year);
int main()
{
	//һ����ÿ�µ�����
	//Number of days in each month of the year
	const int days[12] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};
	int year, month;
	(void)scanf("%d,%d", &year, &month);
	if (month == 2)
	{
		printf("%d", IsLeapyear(year) ? 29 : 28);
	}
	else
	{
		printf("%d", days[month - 1]);
	}
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
