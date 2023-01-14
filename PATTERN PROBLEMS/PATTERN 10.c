#include<stdio.h>
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
void main()
{
	int n,i,j;
	int c=1;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",c);
		}
		c=c+1;
		printf("\n");
	}
}
