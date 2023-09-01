/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double a,b,temp;
	printf ("enter the value of a:");
	fflush (stdout);
	scanf("%1f",&a);
	printf ("enter the value of b:");
		fflush (stdout);
		scanf("%1f",&b);
		temp=a;
		a=b;
		b=temp;
		printf ("after swaping a= .21%f \r\n", a);
		printf ("after swaping b= .21%f \r\n", b);
				return 0;

}
