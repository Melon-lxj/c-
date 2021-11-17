#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int  r, h;
	cin >> h >> r;
	double Pi = 3.14159;
	cout<<(int(ceil(20/((Pi* r* r* h)/1000))));
	return 0;
}