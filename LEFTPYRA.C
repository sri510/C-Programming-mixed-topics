#include<stdio.h>
#include<conio.h>
void main()
{
int i,c,rows;
clrscr();
printf("enter no of rows and columns:\n");
scanf("%d",&rows);
printf("\n");
for(i=1;i<=rows;++i)
{
for(c=1;c<=i;++c)
{
printf("*");
}
printf("\n");
}
getch();
}