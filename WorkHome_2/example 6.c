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
int n,i;
int sum=0;
printf ("enter a positive number:\r\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&n);
	for(i=1;i<=n;++i)
	{
		sum+=i;
}
	printf("sum = %d \r\n",sum);
}








