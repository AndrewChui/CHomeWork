/*ˮ�ɻ�������ָһ����λ�����������λ���ֵ�������ȷ�õ��ڸ��������磺153��1 ^ 3��5 ^ 3��3 ^ 3 ������ ^ ��ʾ�˷���5 ^ 3��ʾ5��3�η�������153��һ����ˮ�ɻ�������
����n, m��100 <= n, m < 1000, ���[n, m]֮���ˮ�ɻ�������������û��ˮ�ɻ�������� - 1.
���룺n, m���ÿո������
���������ˮ�ɻ������ÿո������

cuishuning 2020/11
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n, m;
    (void)scanf("%d%d", &n, &m);
    int firstFind = 0;
    for (int i = n; i <= m; i++)
    {
        int i0 = i % 10;
        int i1 = (i / 10) % 10;
        int i2 = i / 100;
        if (i == i0 * i0 * i0 + i1 * i1 * i1 + i2 * i2 * i2)
        {
            if (firstFind == 0)
            {
                printf("%d", i);
                firstFind = 1;
            }
            else
            {
                printf(" %d", i);
            }
        }
    }
    if (firstFind == 0)
    {
        printf("-1");
    }
    return 0;
}