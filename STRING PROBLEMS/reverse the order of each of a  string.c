//WAP to input a string and reverse the order of the string//
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],word[100][80];
	int i,c=0,p=0,l;
	printf("\nEnter the string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=32)
		{
			word[p][c]=str[i];
			c++;
		}
		else
		{
			word[p][c]='\0';
			c=0;
			p++;
		}
		
	}
	word[p][c]='\0';
	printf("\nThe reversed array:");
	for(i=p;i>=0;i--)
	{
		printf(" %s ",word[i]);
	}
	
	
}
