//WAP to replace a particular word by another word in a given string//
#include<stdio.h>
#include<string.h>
void isreplace(char *sentence,char *word1,char *word2)
{
	int i=0;
	while(sentence[i]!='\0')
	{
		if(sentence[i]==' ' || sentence[i]=='\t')
	}
}
void main()
{
	char sentence[100],word1[20],word2[20];
	int N;
	printf("\nEnter the string:");
	gets(sentence);
	printf("\nEnter the word to be replaced:");
	scanf("%s",word1);
	printf("\nEnter the word to be added:");
	scanf("%s",word2);
	isreplace(sentence,word1,word2);
} 
