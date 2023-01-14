/*Solid rhombus
	*****
   *****
  *****
 *****
******/
#include<stdio.h>
int main(){
	int n,i,j,k,l,m,q,o,p;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=n;k++){
			printf("*");
		}
		printf("\n");
	}
}
