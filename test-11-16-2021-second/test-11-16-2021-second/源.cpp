#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int n;
	cin >> n;
	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;
	cout << c << b << a;
	return 0;
}