/*ÿ��һ��ʼ����һ���ڻ�����ǩ�ֵ��˻���ţ����һ��ǩ�ֵ��˻������š�����ǩ���ļ�¼����Ӧ���ҵ����쿪�ź����ŵ��ˡ�
���������ʽ��
���룺ÿ����������һ��ļ�¼��������������M��ͷ��M�Ǽ�¼���������M�У�ÿ�еĸ�ʽΪ��ID_number Sign_in_time Sign_out_time������ʱ����HH : MM:SS��ʽ������ID number��һ��������15���ַ����ַ�����
�������һ������������ѽ����������ŵ���Ա��ID�š����������֤���������һ���ո������
ע����֤��¼һ�¡�Ҳ����˵��ÿ���˵�ǩ��ʱ���������ǩ��ʱ�䣬����û��������ͬʱǩ����ǩ�ˡ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _record
{
	char name[20];
	char inTime[20];
	char outTime[20];
} Record;

int main()
{
	Record record[30];
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%s%s%s", record[i].name, record[i].inTime
		      , record[i].outTime);
	}

	char name[20];
	strcpy(name, record[0].name);
	char time[20];
	strcpy(time, record[0].inTime);

	for (int i = 1; i < m; i++)
	{
		if (strcmp(time, record[i].inTime) > 0)
		{
			strcpy(name, record[i].name);
			strcpy(time, record[i].inTime);
		}
	}

	printf("%s", name);

	strcpy(name, record[0].name);
	strcpy(time, record[0].outTime);

	for (int i = 1; i < m; i++)
	{
		if (strcmp(time, record[i].outTime) < 0)
		{
			strcpy(name, record[i].name);
			strcpy(time, record[i].outTime);
		}
	}
	printf(" %s", name);
	return 0;
}
