// pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct student
{
	char name[50];
	char num[20];
	int age;
	char tel[20];
	struct student *next;
};
int main()
{
	int s;
	struct student *p,*q,*head;
	head=new student;
	q=head;
	p=q;
	s=1;
	head=NULL;
	while(cout<<"1or2"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"输入姓名：";
		cin>>p->name;
		cout<<"输入学号：";
		cin>>p->num;
		cout<<"输入年龄：";
		cin>>p->age;
		cout<<"输入电话号码：";
		cin>>p->tel;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"姓名为：";
		cout<<p->name<<endl;
		cout<<"学号为：";
		cout<<p->num<<endl;
		cout<<"年龄为：";
		cout<<p->age<<endl;
		cout<<"电话号码为：";
		cout<<p->tel<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
}
