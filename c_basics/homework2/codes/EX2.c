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

int main ()
{

	char alph ;
		printf ("Enter an alphabet: ");
		fflush (stdout);
		scanf ("%c",&alph);
        if (alph =='a'||alph=='A'||alph=='e'||alph=='E'|| alph=='i'|| alph=='I'||alph=='o'||alph=='O'||alph=='u'||alph=='U'||alph=='y'||alph=='Y')
        {

        	printf ("%c is vowel",alph);
        }
        else
        {
        	printf ("%c is consonant",alph);
        }
return 0;
}

