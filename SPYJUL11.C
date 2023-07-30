#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,p=1,d;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
d=n%10;
s=s+d;
p=p*d;
n=n/10;
}
printf("Sum of digits = %d product of digits = %d\n",s,p);
if(s==p)
printf("Number is a Spy Number");
else
printf("Number is not a Spy Number");
getch();
}