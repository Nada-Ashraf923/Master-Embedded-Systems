#include <stdio.h>
#include <string.h>
void main()
{
	char a[100],temp[100];
	int i,j;
	printf ("Enter a string: ");
	gets(a);
	int len=strlen(a)-1;
	
	for (i=0,j=len;i<=len ;i++,j--)
	{
		temp[i]=a[j];
		
	}
	printf ("Reverse string is  =%s ",temp);
}