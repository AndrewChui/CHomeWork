/*�������ɸ���������ֵ��0��4�ķ�Χ�ڣ��� - 1��Ϊ��������ı�־��ͳ��ÿ�������ĸ�����
���룺[0, 4]�ڵ�������ɵ����У������ - 1���ÿո������
�����0, 1, 2, 3, 4��ͳ�Ƹ�������һ���ո������
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int countZero = 0;  //0�ĸ���
	int countOne = 0;
	int countTwo = 0;
	int countThree = 0;
	int countFour = 0;

	int input = 0;
	(void)scanf("%d", &input);
	while (input != -1)
	{
		switch (input)
		{
		case 0:
			countZero++;
			break;
		case 1:
			countOne++;
			break;
		case 2:
			countTwo++;
			break;
		case 3:
			countThree++;
			break;
		case 4:
			countFour++;
			break;
		}
		(void)scanf("%d", &input);
	}

	printf("%d %d %d %d %d\n", countZero,
		countOne, countTwo, countThree, countFour);
	return 0;
}