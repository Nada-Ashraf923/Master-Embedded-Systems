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

void main ()
{
	int n , count;
	unsigned long long fact =1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &n);
	if (n<0)
	{
		printf ("Erorr!!! factorial of negative number dosen't exist.");
	}
	else
	{
		for (count =1;count<=n;count++)
		{
			fact*=count;
		}
		printf ("%lu",fact);
	}
}
