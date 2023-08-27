#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("A is largest");
else
if(b>c)
printf("B is largest");
else
printf("C is largest");
getch();
}

