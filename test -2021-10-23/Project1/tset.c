#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("������������������:");
		scanf("%s", password);
		if (strcmp(password, "838111") == 0)
		{
			printf("������ȷ��������Ļ\n");
			break;

		}
		else
		{
			printf("�����������������\n");

		}
	}
	if (i == 3)
	{
		printf("���ξ�������Ļ����");
	}
	return 0;
}





