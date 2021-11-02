#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int arr[10]={1, 9, 5, 7, 6, 4, 2, 3, 8, 0};

	int b = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	cout << "ÅÅÐòÇ°:" << endl;
	for (i = 0; i < b; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;

	for (i = 0; i < b-1; i++)
	{
	
		for (j = 0; j < b - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int step = arr[j];
				 arr[j] = arr[j + 1];
				 arr[j+1] = step;
			}
		}
	}
	cout << "ÅÅÐòºó:" << endl;
	for (i = 0; i < b; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

		return 0;
}