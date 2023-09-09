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
//EX6
int main()
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, value of a = %.1f\n",a);
    printf("After swapping, value of b = %.2f",b);

return 0;
}

