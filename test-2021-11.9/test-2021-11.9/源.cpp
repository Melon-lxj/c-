#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	cout << "                      -------------猜数字游戏---------------"<<endl;
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	while (1)
	{
		int i = 0;
		cout<< "请输入你要猜的数字（1到100的数字）：";
			cin >> i;
			if (i < num) 
			{ 
				cout<<"你猜小了"<<endl;
			}
			 else if (i > num) 
			{ 
				cout << "你猜大了"<<endl;
			}
			else 
			{ 
				cout << "你猜对了"<<endl;
				break; }
	}
	return 0;
}