//WAP whether a string is a palindrome or not//
#include<stdio.h>
#include<string.h>
void main()
{
	char S[100];
	char revS[100];
	int p=0,i;
	printf("\nEnter the string:");
	gets(S);
	int l=strlen(S);
	for(i=(l-1);i>=0;i--)
	{
		revS[p]=S[i];
		p++;
	}
	revS[p]='\0';
	if(strcmp(S,revS)==0)
	{
		printf("\n%s is a palindrome string",S);
	}
	else
	{
		printf("\n%s is not a palindrome string",S);
	}
	
	
}
