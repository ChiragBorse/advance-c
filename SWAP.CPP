#include<stdio.h>
#include<conio.h>
void swapv (int ,int );

void main()
{
int p=8,q=9;
clrscr();
swapv (p,q);
printf("%d%d",p,q);

getch();
}
void swapv(int x,int y)
{
int t;
t=x;
x=y;
y=t;
printf("%d%d\n",x,y);
}