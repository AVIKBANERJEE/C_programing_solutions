#include<stdio.h>
/*
1
2 3
4 5 6
7 8 9 10
*/
void main()
{
	int i,j,n;
	int c=1;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %2d ",c);
			c=c+1;
		}
		printf("\n");
	}
}
