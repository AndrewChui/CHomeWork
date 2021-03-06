/// <ID>C056</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入公元年份和月份，输出该月份的天数。
/// </summary>
/// <input>年，月（逗号分隔）</input>
/// <output>天数</output>
/// <sample>
/// 2000,2
/// 29
/// </sample>
/// <sample>
/// 2001,2
/// 28
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int IsLeapyear(int year);
int main()
{
	//一年中每月的天数
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
/// 判断是否为闰年
/// </summary>
/// <param name="year">年份</param>
/// <returns>是，返回1，否，0</returns>
int IsLeapyear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
