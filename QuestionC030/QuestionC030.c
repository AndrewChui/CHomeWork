/*���ʼ��ܡ�����һ���ַ�����һ���Ǹ�����k��
���ַ����е�ÿһ����ĸ������ĸ�������ĵ�k����ĸ���棬
����k��ʱ�ٴ���ĸaѭ������������k = 3�ǣ�a��d���棬
A��D���棬x��a���棬y��b���棬���ִ�Сд���䡣
�ַ����еķ���ĸ�ַ����䡣�ַ����ĳ��Ȳ�����100��
���룺һ���ַ����ͷǸ�����k
��������ܵ��ַ�����
*/

#define _CRT_SECURE_NO_WARNINGS

char ReplaceChar(char x, int n);

#include<stdio.h>

int main()
{
	char str[100];
	int n;
	scanf("%s%d", str, &n);
	int i = 0;
	while (str[i])
	{
		str[i++] = ReplaceChar(str[i], n);
	}

	printf("%s", str);
	return 0;
}

///<summary>
/// ����ĸx������ĸ�������ĵ�n����ĸ���棬
/// ����n��ʱ�ٴ���ĸaѭ������
/// </summary>
/// <param name="x">�滻����ĸ</param>
/// <param name="n">�滻ֵ</param>
/// <returns>�滻�����ĸ,���x������ĸ���򷵻�x</returns>
char ReplaceChar(char x, int n)
{
	if ('A' <= x && x <= 'Z')
	{
		x = (x - 'A' + n) % 26 + 'A';
	}
	if ('a' <= x && x <= 'z')
	{
		x = (x - 'a' + n) % 26 + 'a';
	}
	return x;
}
