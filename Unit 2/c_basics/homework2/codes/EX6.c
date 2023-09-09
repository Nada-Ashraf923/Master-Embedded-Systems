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
	int n, count, sum=0;

	printf("Enter an integer: ");
    fflush(stdout);
	scanf("%d", &n);

	for (count=1;count<=n; ++count)
	{
		sum+=count ;
	}
	printf("Sum = %d",sum);


}