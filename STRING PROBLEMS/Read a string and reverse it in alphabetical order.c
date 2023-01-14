//WAP which will read a string and rewrite it in the alphabetical//
#include<stdio.h>
void main()
{
	char temp[100],temp1;
	printf("\nEnter the string:");
	gets(temp);
	int i,j;
	int N=strlen(temp);
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(temp[i]>temp[j])
			{
				temp1=temp[i];
				temp[i]=temp[j];
				temp[j]=temp1;	
			}
		}
	}
	printf("\nThe string in alphabetical order is %s",temp);
	
}
