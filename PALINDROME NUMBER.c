//WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS A PALINDROME NUMBER OR NOT//
#include<stdio.h>
int main()
{
	int n,result=0,q,rem;
	printf("Please enter the number :");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		rem=q%10;
		result=result*10+rem;
		q=q/10;
	}
	if(result==n)
	printf("Its a palindrome number");
	else
	printf("No!Its not a palindrome number");
	return 0;
}
