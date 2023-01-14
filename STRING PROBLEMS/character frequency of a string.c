//WAP IN C To find the character frequency of a string//
#include<stdio.h>
#include<string.h>
struct freq{
	char ch;
	int f;
};
void main()
{
	struct freq chr[100];
	char inst[100],c;
	int p=0,i,j;
	printf("\nEnter the string:");
	while((c=getchar())!='\n')
	{
		inst[i]=c;
		int flag=0;
		for(i=0;i<p;i++)
		{
			if(chr[i].ch==c)
			{
				chr[i].f=chr[i].f+1;
				flag=1;
			}
		}
		if(flag==0)
		{
			chr[p].ch=c;
			chr[p].f=1;
			p++;
		}
		j++;
	}
	inst[i]='\0';
	for(i=0;i<p;i++)
	{
		printf("\n%c = %d",chr[i].ch,chr[i].f);
	}
}
