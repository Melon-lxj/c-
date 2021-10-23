#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入老妈锁屏密码:");
		scanf("%s", password);
		if (strcmp(password, "838111") == 0)
		{
			printf("输入正确，解锁屏幕\n");
			break;

		}
		else
		{
			printf("输入错误，请重新输入\n");

		}
	}
	if (i == 3)
	{
		printf("三次均错误，屏幕锁定");
	}
	return 0;
}





