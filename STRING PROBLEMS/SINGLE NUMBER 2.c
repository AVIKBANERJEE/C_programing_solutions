/*Given an non-empty array of integers nums,every element appears thrice except for one.Find that
single one*/
#include<stdio.h>
#include<string.h>
struct freq{
	int num;
	int f;
};
void main()
{
	struct freq A[100];
	int arr[100];
	int N,i,p=0,flag;
	printf("\nEnter the size of the array:");
	scanf("%d",&N);
	printf("\nEnter the array elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++)
	{
		for(i=0;i<p;i++)
		{
			if(A[i].num==arr[i])
			{
				A[i].f=A[i].f+1;
				flag=1;
			}
		}
		if(flag==0)
		{
			A[p].num=arr[p];
			A[p].f=1;
			p++;
		}
	}
	for(i=0;i<N;i++)
	{
		if(A[i].f==1)
		{
			printf("\nThe single number is %d",A[i].num);
		}
	}
	
	
}
