/*�������滻Ϊ��ĸ������һ����������������2��
�ٽ�����2���������ֵ��������ֵĸ�λ����Ӧ��ŵ���ĸ������滻ԭ��0��Ϊa��1��Ϊb��2��Ϊc��...���Դ����ƣ�9��Ϊj��
���磬1234, ����2����617���滻���Ϊgbh
���룺һ��������
�������2��������������ֺ��ַ������м���һ���ո������
������
1234
617 gbh
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum;
	(void)scanf("%d", &inputNum);
	inputNum = inputNum / 2;
	printf("%d ", inputNum);
	//��ת����inputnum
	int resverseInputNum = 0;
	while (inputNum)
	{
		resverseInputNum = resverseInputNum * 10 + inputNum % 10;
		inputNum /= 10;
	}
	while (resverseInputNum)
	{
		printf("%c", resverseInputNum % 10 + 'a');
		resverseInputNum /= 10;
	}
	return 0;
}