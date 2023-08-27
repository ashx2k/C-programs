#include<stdio.h>
#include<conio.h>
void main()
{
char name [50];
int i=0;
clrscr();
printf("Enter your name : ");
scanf("%s",&name);
while(name[i]!=NULL)
{
i++;
}
printf("length is %d",i);
getch();
}