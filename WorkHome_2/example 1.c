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

int main(void) {
	int y ;
	printf("enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &y);
if(y%2==0)
{
	printf ("the number is even %d\r\n", y);

}
else
{
	printf ("the number is odd %d\r\n", y);

}
}
