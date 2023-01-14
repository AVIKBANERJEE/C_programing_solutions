#include<stdio.h>
/*
A
B C
D E F
G H I J
K L M N O
*/
void main()
{
	int i,j,n;
	int c=65;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c ",c);
			c=c+1;
			
		}
		printf("\n");
	}
}
