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
//EX4
int main()
{
	float x,y,z;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf(" %f",&x);
	fflush(stdin);
	scanf(" %f",&y);
	fflush(stdin);
	z=x*y;
	printf("Product: %f",z);
return 0;
}