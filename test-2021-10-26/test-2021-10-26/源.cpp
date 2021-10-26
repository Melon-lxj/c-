#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, & m);
	int max = 0;
	if (m < n)
		max = m;
	else(n < m);
		max = n;
	while (1)
	{
		if (n% max == 0 && m % max == 0)
		{
			printf("%d", max);
			break;
		}
		max--;
	}





	return 0;
}