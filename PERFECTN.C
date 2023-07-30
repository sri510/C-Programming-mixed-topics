#include<stdio.h>
#include<conio.h>
void main()
{
int n, i=1, sum=0;
clrscr();
printf("Enter a Number:");
scanf("%d",&n);
while (i<n)
{
if (n%i==0)
sum = sum+i;
i++;
}
if (sum==n)
printf("%d is prefect number.",i);
else
printf("%d is not a prefect number.",i);
getch();
}