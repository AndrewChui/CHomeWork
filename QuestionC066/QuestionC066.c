/*��ҽԺ���Σ����룩��ʱ������������й��ɣ����ǵ�һ�Σ�
ͣһ�£�Ȼ��ζ��Σ�ͣһ�£��ٵ����Σ�ͣһ��...��������һ�����⣺
��ƿ��ˮһ����v������ÿһ����d������
ÿһ�ε��ٶ���һ�루�������һ�β���d�������򻨷ѵ�ʱ��Ҳ��һ�룩��
ͣһ�µ�ʱ��Ҳ��һ�룬��ƿˮʲôʱ���ܵ����أ���0 < d < v < 6000)
���룺һ���Ƕ��ٺ�����һƿ��ˮ�ж��ٺ������м��ÿո����.
�����������Ҫ����ʱ��.

Cui Shuning (��������2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	float d, v;
	(void)scanf("%f%f", &d, &v);
	int totalInterval = 0;
	int n = 1;
	int t = (int)(v / d); //�Ƿ���������
	int time = v / d - t > 0 ? t + 1 : t; //ͳ�ƵεĴ���
	while (v > 0) //ͳ�Ƽ������
	{
		for (int i = 0; i < n; i++)
		{
			v = v - d;
			if (v <= 0)
			{
				break;
			}
		}
		totalInterval++; //ͳ�Ƽ������
		n++;
	}
	printf("%d", time + totalInterval - 1);
	return 0;
}
