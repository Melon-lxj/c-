#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	cout << "                      -------------��������Ϸ---------------"<<endl;
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	while (1)
	{
		int i = 0;
		cout<< "��������Ҫ�µ����֣�1��100�����֣���";
			cin >> i;
			if (i < num) 
			{ 
				cout<<"���С��"<<endl;
			}
			 else if (i > num) 
			{ 
				cout << "��´���"<<endl;
			}
			else 
			{ 
				cout << "��¶���"<<endl;
				break; }
	}
	return 0;
}