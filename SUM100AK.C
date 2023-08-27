#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
clrscr();
for(i=0;i<=100;i++)
{
if (i%4==0)
sum=sum+i;
}
printf("the sum of number is %d",sum);
getch();
}
