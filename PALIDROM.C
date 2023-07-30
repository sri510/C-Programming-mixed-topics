#include<stdio.h>
#include<conio.h>
void main()
{
int n, rev=0, rem, i;
clrscr();
printf("Enter a number to check:");
scanf("%d",&n);
i=n;
while (n!= 0)
{
rem = n % 10;
rev = rev * 10 + rem;
n /= 10;
}
if(i==rev)
printf("%d is palidrom.", i);
else
printf("%d is not palidrom", i);

getch();
}