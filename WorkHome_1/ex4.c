/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,result;
	printf ("enter two float numbers:");
			fflush(stdout);
			scanf (" %f %f ",&x,&y);
	result= x*y;
	printf(" result= %f \r\n",result);
}
