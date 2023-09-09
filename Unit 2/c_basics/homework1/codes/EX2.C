/*
 ============================================================================
 Name        : firstproject.c
 Author      : Nada Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : c basic
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
//EX2
int main ()
{
    int x;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf(" %d",&x);
	fflush(stdin);
	printf("You entered: %d",x);
	return 0;
}