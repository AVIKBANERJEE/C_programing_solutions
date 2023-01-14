//WAP to read 2 strings and compare them using the strncmp function//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
//	int N,M;
//	printf("\nEnter the size of the first string:");
//	scanf("%d",&N);
//	printf("\nEnter the size of the second string:");
//	scanf("%d",&M);
	char str1[100],str2[100];
	//N=(int *)malloc(N*sizeof(int));
	//M=(int *)malloc(M*sizeof(int));
	printf("\nEnter the first string:");
	gets(str1);
	printf("\nEnter the second string:");
	gets(str2);
	if(strncmp(str1,str2,100)==0)
	{
		printf("\nBoth are equal");
	}
	else if(strncmp(str1,str2,100)<0)
	{
		printf("\nstring1 is smaller than string 2");
	}
	else if(strncmp(str1,str2,100)>0)
	{
		printf("\nstring 2 is smaller than string1");
	}
}
