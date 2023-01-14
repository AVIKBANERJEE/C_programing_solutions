/*Given an non-empty array of integers nums,every element appears thrice except for one.Find that
single one*/
#include<stdio.h>
#include<string.h>
void main()
{
	int arr[100];
	int arr1[100];
	int N,i,p=0,j,k;
	int num=0;
	printf("\nEnter the size of the array:");
	scanf("%d",&N);
	printf("\nEnter the array elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<N-1;k++)
				{
					arr[k]=arr[k+1];
					
				}
				N--;
				j--;
				
			}
		}
	}
	for(i=0;i<N;i++)
	{
		arr1[i]=arr[i];
		
	}
	for(i=0;i<N;i++)
	{
		num=(3*(arr1[i])+arr[i]);
	}
	int temp=num/2;
	printf("\t%d",temp);
	

	
	
}
