#include<stdio.h>  
void main()
{
	
	int arr[30], element, number, location;

	printf("\nEnter no of elements :");
	scanf("%d", &number);
	
	int i;
	for (i = 0; i < number; i++) 
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the element to be inserted :"); 
	scanf("%d", &element);

	printf("\nEnter the location :"); 
	scanf("%d", &location);

	for (i= number; i >= location; i--) 
	{
	arr[i]= arr[i - 1];
	}
	number++;
	arr[location-1] = element;

	for (i=0; i<number; i++)
	{
	printf("%d ", arr[i]);
	}
}