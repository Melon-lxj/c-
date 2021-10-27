#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
			printf("%d\n", i);

  }
	return 0;
}