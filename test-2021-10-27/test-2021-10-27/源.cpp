#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int j = 0;
	int i = 0;
	
	
	for (i = 0; i <=200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}

		if (i == j)
		{
			
			printf("  %d", i);
			
		}
		
			
	
	}
	return 0;
}