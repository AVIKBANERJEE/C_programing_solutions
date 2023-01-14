//WAP to print a series//
#include<stdio.h>
void main()
{
	char word[]="Cprogramming";
	int d=0,i;
	for(i=0;i<=11;i++)
	{
		d=i+1;
		printf("|%-12.*s\n",d,word);
	}
	for(i=11;i>=0;i--)
	{
		d=i+1;
		printf("|%-12.*s\n",d,word);
	}
	
	
}

