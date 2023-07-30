#include<stdio.h>
#include<conio.h>
void main()
{
int f1=0,f2=1,f3,i=1,len;
clrscr();
printf("Enter the number: ");
scanf("%d",&len);
//printf("%d %d",f1,f2); if don't wnat to print o,1;
while(i<=len)
{
f3=f1+f2;
printf(" %d",f3);
f1=f2;
f2=f3;
i=i+1;
}
getch();
}