#include<stdio.h>
/*
* * * *
* * * *
* * * *
* * * *
*/
void main()
{
	int n,i,j;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) /*no of rows */
	{
		for(j=1;j<=n;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
}
