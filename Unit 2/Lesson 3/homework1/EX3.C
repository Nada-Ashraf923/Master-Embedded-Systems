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
//EX3
int main()
{
	int x,y,z;
	printf("Enter two integers:");
	fflush(stdout);
	scanf(" %d",&x);
	fflush(stdin);
	scanf(" %d",&y);
	fflush(stdin);
	z=x+y;
	printf("Sum: %d",z);

return 0;
}