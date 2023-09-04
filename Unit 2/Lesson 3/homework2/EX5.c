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
	char x;
	printf ("Enter a charactar: ");
	fflush (stdout);
	scanf ("%c",&x);
	if ((x>='a' && x<='z')||(x>='A'&&x<='Z'))
	{
		printf ("%c is alphabet",x);
	}
	else
	{
		printf ("%c is not alphabet",x);
	}




}