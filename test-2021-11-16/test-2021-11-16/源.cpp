#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int a = 0;	
	int b = 0;
	cin >> a >> b;

	cout << fixed << setprecision(9);
	cout<< (double)a / b;

	return 0;
}