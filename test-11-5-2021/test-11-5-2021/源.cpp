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
	 q.name = " 刘鑫健 ";
	 q.age = 18;
	 q.tall = 180;
	 cout << "学生档案；" << q.name<< "年龄；" << q.age <<" 身高 ; " << q.tall;
	 return 0;
 }