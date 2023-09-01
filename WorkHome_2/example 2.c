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

int main() {
	char ch;
	while(1)
	{
		printf ("enter the letter:");
		fflush(stdin);fflush(stdout);
		scanf ("%c",&ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf ("the character is vowel \n");
		}
		else if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf ("the character is vowel \n");
		}
		else
			printf ("the character is consonant\n");
	}
}

