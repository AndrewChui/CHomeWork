/*���빫Ԫ��ݺ��·ݣ�������·ݵ�������
���룺�꣬�£����ŷָ���
���������
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	const int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month;
	(void)scanf("%d,%d", &year, &month);
	if (month == 2)
	{
		printf("%d", year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 29 : 28);
	}
	else
	{
		printf("%d", days[month - 1]);
	}
	return 0;
}