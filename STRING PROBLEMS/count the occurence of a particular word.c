//WAP which will read a text and count the occurence of a particular word//
#include<stdio.h>
void main()
{
	char text[100];
	printf("\nEnter the text:");
	gets(text);
	int i=0,c=0;
	while(text[i]!='\0')
	{
		if(text[i]==' '|| text[i]=='\t')
		{
			c=c+1;
		}
		i++;
	}
	printf("\nWords present in a sentence = %d",(c+1));
}
