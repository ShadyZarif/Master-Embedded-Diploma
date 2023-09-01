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
	int x;
	printf ("enter the number:");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&x);
	if (x>0)
	{
		printf("the number is postive %d \r\n",x);

	}
	else if (x<0)
	{
		printf ("the number is negative %d \r\n",x);
	}

else
	printf("you entered zero \r\n");
}

