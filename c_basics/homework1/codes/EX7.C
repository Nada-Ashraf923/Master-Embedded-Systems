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
//EX7
int main()
{
	int a, b;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf(" %d",&a);
	fflush(stdin);
	scanf(" %d",&b);
	fflush(stdin);
	printf("Before swap a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}