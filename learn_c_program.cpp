// learn_c_program.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

/*
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
*/


int main()
{
	int n;
	
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;
	while (fahr >= lower)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr - step;
	}

	scanf("%d",&n);
}