#include<stdio.h>
/*
0
1 0
1 0 1
0 1 0 1
0 1 0 1 0
*/
void main()
{
	int n,i,j;
	int c=0;
	printf("\nEnter the no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",c);
			c=1-c;
		}
		printf("\n");
	}
}
