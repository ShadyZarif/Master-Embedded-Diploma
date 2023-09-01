/*
 ============================================================================
 Name        : example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,sum;
	char oper;
	printf ("enter the value of x and y:");
	fflush (stdout);
	scanf("%f %f",&x,&y);
	printf ("enter the operator:");
	fflush (stdout);
	scanf ("%c",&oper);
	switch (oper)
	{
	case '+':
	{
		sum=x+y;
		printf ("sum= %f \r\n",sum);
	}
	break ;
	case '-':
	{
		sum=x-y;
		printf ("sum= %f \r\n",sum);
	}
	break;
	case '*':
	{
		sum=x*y;
		printf ("sum= %f \r\n",sum);
	}
	break;
	case '/':
	{
		sum=x/y;
		printf ("sum= %f \r\n",sum);

	}
	break;
	}

}
