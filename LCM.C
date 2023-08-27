#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,lcm,gcd,numerator,denominator,remainder;
clrscr();
printf("\n Enter the numbers");
scanf("%d,%d",&no1,&no2);
if(no1>no2)
{
numerator=no1;
denominator=no2;
}
else
{
numerator=no2;
denominator=no1;
}
remainder=numerator%denominator;
while(remainder!=0)
{
numerator=denominator;
denominator=remainder;
remainder=numerator%denominator;
}
gcd=denominator;
lcm=no1/no2*gcd
printf("\nLcm is %d",lcm);
printf("\nGcd is %d",gcd);
getch():
}
