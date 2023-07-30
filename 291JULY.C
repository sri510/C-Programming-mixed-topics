/* To create simple calculator using switch case */
#include<stdio.h>
#include<conio.h>
void main()
{

char op;
float num1, num2, result=0;
clrscr();
printf("Enter number1 operator number2: \n");
scanf("%f%c%f", &num1, &op, &num2);

switch(op)
{
case '+':
	result = num1 + num2;
	break;
case '-':
	 result = num1 - num2;

case '*':
	result = num1 * num2;
	break;

case '/':
	result = num1 / num2;
	break;
default:
	printf("Invalid operator");
}
printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

getch();
}
