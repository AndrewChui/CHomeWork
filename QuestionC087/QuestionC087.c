/*��д����ɾ���ַ����м�������Ǻţ�* ���������β��* �ţ��������䡣�ַ������Ȳ�����200��
���룺��* �ŵ��ַ�����
������м�û��* �ŵ��ַ�����
������
*** street***** music***
*** streetmusic***
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char* DelCharBtweenStr(char* str, int i, int j, char delch);

int main()
{
    char inStr[100];
    gets_s(inStr, 100);
    int i = 0;
    while (inStr[i++] == '*');
    int j = strlen(inStr) - 1;
    while (inStr[j--] == '*');
    printf("%s", DelCharBtweenStr(inStr, i - 1, j + 1, '*'));
    return 0;
}

char* DelCharBtweenStr(char* str, int i, int j, char delch)
{
    //ɾ��i��j֮�������ַ���
    while (j >= i)
    {
        if (str[j] == delch)
        {
            int n = j;
            while (str[n])
            {
                str[n] = str[n + 1];
                n++;
            }
            str[n] = 0;
        }
        j--;
    }
    return str;
}