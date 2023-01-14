#include<stdio.h>
/*
6 
7  6
7 6 7
6 7 6 7
6 7 6 7 6
*/
void main()
{
	int n,i,j;
	int c=6;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",c);
			c=13-c;
		}
		printf("\n");
	}
}
