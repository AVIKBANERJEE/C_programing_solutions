//WAP to find the vowel frquency of a string//
#include<stdio.h>
int main()
{
	char sen[100];
	printf("\nEnter the sentence:");
	gets(sen);
	//scanf("%[^\n]",sen);//
	int C1=0,C2=0,C3=0,C4=0,C5=0;
	int i=0;
	while(sen[i]!='\0')
	{
		if(sen[i]=='a'|| sen[i]=='A')
		{
			C1=C1+1;
			
		}
		else if(sen[i]=='e'|| sen[i]=='E')
		{
			C2=C2+1;
		}
		else if(sen[i]=='i'|| sen[i]=='I')
		{
			C3=C3+1;
		}
		else if(sen[i]=='o'|| sen[i]=='O')
		{
			C4=C4+1;
		}
		else if(sen[i]=='u'|| sen[i]=='U')
		{
			C5=C5+1;
		}
		i++;
	}
	printf("a = %d\n",C1);
	printf("e = %d\n",C2);
	printf("i = %d\n",C3);
	printf("o = %d\n",C4);
	printf("u = %d\n",C5);
	return 0;
}
