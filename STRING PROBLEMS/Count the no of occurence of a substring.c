/*WAP to read a line a text from the keyboard and print out the number of occurence of a given 
substring using strstr()*/
#include<stdio.h>
void main()
{
	char str1[100],str2[20];
	printf("\nEnter the first string:");
	gets(str1);
	printf("\nEnter the second string:");
	gets(str2);
	int C=0,i;
	if(strstr(str1,str2)==NULL)
		printf("\nSubstring is not found");
	else
	{
		for(i=0;i<strlen(str1);i++)
		{
			if(str1[i]==str2[i])
				C=C+1;	
		}
		printf("\n %s occurs at %d times",str2,(C+1));
	}
}
