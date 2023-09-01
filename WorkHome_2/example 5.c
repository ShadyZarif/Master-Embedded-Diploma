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
	char c;
	printf ("enter the letter:");
		fflush(stdin);fflush(stdout);
		scanf ("%c",&c);
		if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
				{
			printf ("%c is Alphabet",c);

				}
		else
			printf ("%c is not Alphabet",c);
}
