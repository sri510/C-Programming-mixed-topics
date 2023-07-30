#include<stdio.h>
#include<conio.h>
void main()
{
int n,sqr=1,rem,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",n);
sqr = n*n;
while(sqr!=0)
{
rem = sqr%10;
sum += rem;
sqr /= 10;
}
printf("";
if(sum==n)
printf("is a Neon Number.\n");
else
printf("is not a Neon Number.\n");
getch();
}

