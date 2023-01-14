//WAP to read a string and replace every character by its succesor except blank//
#include<stdio.h>
void main()
{
	char str[100];
	printf("\nEnter the string:");
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=32)
		{
			str[i]=str[i]+1;
		}
	}
	//puts(str);
	printf("\nThe new string is '%s'",str);
}
