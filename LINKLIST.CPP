
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct ndt{
	     int data;
	   struct ndt* next;
	    };
typedef struct ndt node;
void display(void);
void create(void);
void insert(void);
node * start;

void main()
{
clrscr();
int choice;
do{
printf("this is a program to implement a linkedlist\n");
printf("press 1 for creation\n");
printf("press 2 for insert\n");
printf("press 3 for display\n");
printf("press 4 for exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
       break;
case 2:insert();
       break;
case 3:display();
       break;
case 4:exit(0);
}
}while(1);
}
void display(void)
{
node* temp1;
temp1=start;
printf("start->");
while(temp1!=NULL)
{
printf("%d-->",temp1->data);
temp1=temp1->next;

}
printf("end");
}
void create(void)
{
node* temp;

temp = (node *)malloc(sizeof(node));
if(temp!=NULL)
{
printf("enter the value of data");
scanf("%d",&temp->data);
start=temp;
temp->next=NULL;
}
else
{
printf("memory could not be allocated by operating");
}
}

void insert(void)
{
node* temp1;
node*temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp1=(node *)malloc(sizeof(node));
if(temp1==NULL)
{
printf("memory not allocated");
}
else
{
printf("enter data");
scanf("%d",&temp1->data);
temp1->next=NULL;
temp->next=temp1;
}
}







