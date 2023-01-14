//WAP to read a string and print it in Toggle case//
#include<stdio.h>
void main()
{
	char str[100];
	printf("\nEnter the string:");
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]=str[i]+32;
		else if(str[i]>90 && str[i]<97)
			continue;
		else if(str[i]>=97 && str[i]<=122)
			str[i]=str[i]-32;
			
	}
	printf("\nString in toggle case is '%s'",str);
}
