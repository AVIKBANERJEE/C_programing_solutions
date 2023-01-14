//WAP to read a string and print in toggle case//
#include<stdio.h>
#include<string.h>
void main()
{
	char P[100];
	printf("\nEnter the string:");
	gets(P);
	int i,l;
	l=strlen(P);
	for(i=0;P[i]!='\0';i++)
	{
			if(P[i]>=65 && P[i]<=90)
			{
				P[i]=P[i]+32;
			}
			else if(P[i]>=97 && P[i]<=122)
			{
				P[i]=P[i]-32;
			}
		
	
	}
	printf("\nRequired string in togglecase is = %s",P);
}
