/*�������д�Ϣ����������money����λ��Ԫ��������years��
������rate�����㵽�ڴ�Ϣ������2λС������
���㹫ʽ���£�
sum = money*(1 + rate)^years
����:�������ڣ������ʡ���Ϊ�����������ö��ŷָ�
�������Ϣ������2λС����
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	double money, rate;
	int years;
	(void)scanf("%lf,%d,%lf", &money, &years, &rate);
	printf("%.2lf", money * pow((1 + rate), years));
	return 0;
}