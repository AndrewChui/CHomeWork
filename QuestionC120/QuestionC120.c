/*��д������ȥ��һ���ַ����г�ͷ����β���ո�������пո񣬲���д���������е��ò��ԡ�
���룺
ռһ�У�ע��������ַ������Ȳ��ᳬ��80��
�����
ռһ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char inputStr[100];
    gets(inputStr);
    //���ַ�����ߵ�һ���ǿո��ַ�
    int i = 0;
    while (inputStr[i] && inputStr[i] == ' ')
    {
        i++;
    }

    //���ַ����ұߵ�һ���ǿո��ַ�
    int j = strlen(inputStr) - 1;
    while (inputStr[j] && inputStr[j] == ' ')
    {
        j--;
    }

    //ɾ��i��j֮�����пո��ַ���
    while (j >= i)
    {
        if (inputStr[j] == ' ')
        {
            int n = j;
            while (inputStr[n])
            {
                inputStr[n] = inputStr[n + 1];
                n++;
            }
            inputStr[n] = 0;
        }
        j--;
    }
    printf("%s", inputStr);
    return 0;
}
 