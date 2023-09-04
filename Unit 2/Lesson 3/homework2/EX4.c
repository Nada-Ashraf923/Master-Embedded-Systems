/*
 ============================================================================
 Name        : assign1.c
 Author      : Nada Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	float num ;
	printf ("Enter an integer you want to check: ");
	fflush (stdout);
	scanf ("%f",&num);

	if (num==0)
	{
		printf ("the number is zero");
	}
	else if (num>0)
	{
		printf ("%.2f is positive .",num);
	}
	else
	{
		printf ("%.2f is negative .",num);
	}

}