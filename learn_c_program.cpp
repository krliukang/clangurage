// learn_c_program.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

#define MAXLINE 10  //控制一行有多少个字符

int getline(char s[], int lim);     //从一个输入的文本中得到lim个字符放入s数组中
int strindex(char s[], char t[]);   //将s数组中的字符与t中的字符进行比较，相同时输出有lim个字符的行

char pattern[] = "ould";

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}
	return found;
}

int getline(char s[], int lim)
{
	int c, i;
	
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}