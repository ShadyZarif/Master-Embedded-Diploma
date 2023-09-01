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
	unsigned long long fact = 1;
		printf ("enter the value of n:");
		fflush (stdout);
		scanf("%d",&n);
		if (n<0)
		{
			printf ("error !");
		}
		else if (n>0)
		{
			for (i=1;i<=1;++i)
			{
				fact*=i;
				printf ("factorial of %d = 11%u", n, fact);
			}
		}
			else
				printf ("you entered zero");

				return 0;
		}

