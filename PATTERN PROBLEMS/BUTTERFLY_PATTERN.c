//Butterfly pattern
#include<stdio.h>
int main(){
	int n,i,j,k,l,m,q,o,p;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		//1st part stars
		for(j=1;j<=i;j++){
			printf("*");
		}
		//spaces
		for(k=1;k<=2*(n-i);k++){
			printf(" ");
		}
		//2nd part stars
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}
	//2nd half
	for(m=n;m>=1;m--){
		for(q=1;q<=m;q++){
			printf("*");
		}
		for(o=1;o<=2*(n-m);o++){
			printf(" ");
		}
		for(p=1;p<=m;p++){
			printf("*");
		}
		printf("\n");
	}
}
