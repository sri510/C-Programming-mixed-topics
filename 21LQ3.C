#include<stdio.h>
#include<conio.h>
void main()
{
int i=0, j=1, k=2, m;
clrscr();
m=i++ || j++ || k++;
clrscr();
printf("%d %d %d %d", m,i,j,k);
getch();
}