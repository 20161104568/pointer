// pointer.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout<<"����������";
		cin>>p->name;
		cout<<"����ѧ�ţ�";
		cin>>p->num;
		cout<<"�������䣺";
		cin>>p->age;
		cout<<"����绰���룺";
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
		cout<<"����Ϊ��";
		cout<<p->name<<endl;
		cout<<"ѧ��Ϊ��";
		cout<<p->num<<endl;
		cout<<"����Ϊ��";
		cout<<p->age<<endl;
		cout<<"�绰����Ϊ��";
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
