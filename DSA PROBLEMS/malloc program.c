#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	int *a;
	printf("\nEnter no of data:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("\nCan't allocate memory....");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value a[%d]:",i);
			scanf("%d",&a[i]);
		}
		printf("\nEntered elements are::");
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
	}
}
