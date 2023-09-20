#include <stdio.h> 
void main ()
{
	float a[100],sum,num; 

	printf("Enter the number of data: "); 
	scanf("%f",&num);
	int i,j;
	for(i=0;i<num;++i) 
	{
		printf("Enter number: "); 
		scanf("%f",&a[i]);
	}
	for (i=0;i<num;++i) 
	{
		sum=sum+a[i];
	}
	printf("Average =%.2f",sum/num);
	
}