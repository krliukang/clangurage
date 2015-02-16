// learn_c_program.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

int power(int m, int n);


int main()
{
	int n;
	
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d %d %d\n", i, power(2,i), power(-3, i));
	}


	scanf("%d",&n);
		return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}