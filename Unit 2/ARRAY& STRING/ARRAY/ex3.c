#include<stdio.h>  
void main(){  
    int m, n;  
    printf("Enter the number of rows and columns: ");  
    scanf("%d %d", &m,&n);  
  
    int matrix[10][10] , temp[10][10],i,j;  
    printf("Enter the elements of the matrix:\n");  
    for( i=0; i<m; i++)
	{  
        for( j=0; j<n; j++)
		{  
	        printf("Enter a%d%d: ",i+1,j+1); 
            scanf("%d", &matrix[i][j]);  
        }  
    }  
	
	printf("\nEntered matrix\n");
	for(i=0;i<m; ++i) 
	{
		for(j=0;j<n;++j)
		{
			printf("%d\t",matrix[i][j]);
			if(j==n-1)
			printf("\n");
		}
	}
	
    for( i=0; i<m; i++)
	{  
        for( j=0; j<n; j++)
		{  
            temp[j][i] = matrix[i][j];  
        }  
    }  
	
	printf("\ntranspose matrix\n");
	for(i=0;i<n; ++i) 
	{
		for(j=0;j<m;++j)
		{
			printf("%d\t",temp[i][j]);
			if(j==m-1)
			printf("\n");
		}
	}
	
   
}