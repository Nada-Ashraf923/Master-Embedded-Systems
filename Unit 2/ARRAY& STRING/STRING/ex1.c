#include <stdio.h>

void main()
{
	char a[100],x;
	int i,count=0;
	printf ("Enter a string: ");
	gets(a);
	printf("Enter the character to find frequancy: ");
	scanf("%c",&x);
	for (i=0;a[i]!='\0' ;i++)
	{
		if (x==a[i])\
		{
			count++;
		}
	}
	printf (" frequancy of %c =%d ",x,count);
}
