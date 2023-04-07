#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
FILE *fptr;
int count=0;
char filename[100];
char ch;

printf("Enter the filename: ");
scanf("%s",&filename);

fptr = fopen(filename,"r");

if(fptr == NULL)
{
printf("could not open file.\n");
}

while ((ch = fgetc(fptr)) != EOF)
{
count++;
}
fclose(fptr);

printf("Numbers of characters in %s is %d.\n",filename, count);
getch();

}