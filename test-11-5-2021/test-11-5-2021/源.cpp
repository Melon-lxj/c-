#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
 struct student 
 {
	 string name;
	 int age;
	 int tall;
 };

 int main()
 {
	 struct student q;
	 q.name = " ���ν� ";
	 q.age = 18;
	 q.tall = 180;
	 cout << "ѧ��������" << q.name<< "���䣻" << q.age <<" ��� ; " << q.tall;
	 return 0;
 }