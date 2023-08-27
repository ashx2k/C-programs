 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i=0;
 char str[10];
 clrscr();
 printf("enter a string");
 scanf("%s",&str);
 while(str[i]!=NULL)
 {
 if(str[i]>=97&&str[i]<=122)
 {
 str[i]=str[i]-32;
 }
 else if(str[i]>=65&&str[i]<=96)
 {
 str[i]=str[i]+32;
 }
 i++;
 }
 printf("the converson is %s ",str);
 getch();
 }
