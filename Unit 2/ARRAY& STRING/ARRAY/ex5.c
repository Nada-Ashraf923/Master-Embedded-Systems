#include <stdio.h>
void main()
{
	int a[100], element, num, i;

	printf("\nEnter no of elements :");
	scanf("%d", &num);
	
	printf("\nEnter the values:\n"); 
	for (i=0; i < num; i++) 
		{
		scanf("%d", &a[i]);
		}

	printf("\nEnter the elements to be searched :"); 
	scanf("%d", &element);

    int j=0;
	while (j < num && element != a[j]) 
	{
		j++;
	}
		if (j<num) 
		{ 
		printf("Number found at the location = %d", j + 1); 
		}
		else 
		{ 
		printf("Number not found");
		}
	
}