#include<stdio.h>
#include<conio.h>

struct student {
 int roll;
 char name[30];
 int marks;
 };
 typedef struct student a;

 void main()
 {
 int i;
 clrscr();
 a b[3];
 printf("enter the details");
 for(i=0;i<=2;i++)
 {
 scanf("\n%d %s %d",&b[i].roll,&b[i].name,&b[i].marks);
 }
 for(i=0;i<=2;i++)
 {
 printf("\n%d %s %d",b[i].roll,b[i].name,b[i].marks);
 }
 getch();
 }



