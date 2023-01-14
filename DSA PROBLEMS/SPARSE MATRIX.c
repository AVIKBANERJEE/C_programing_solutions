#include<stdio.h>
#define MAXCOL 10
#define MAXROW 10
int a[MAXROW][MAXCOL];
int vector[10][3];
void generate_sparse(int row,int col){
	int i,j;
	int p=1,count=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]!=0){
				vector[p][0]=i;
				vector[p][1]=j;
				vector[p][2]=a[i][j];
				count++;
				p++;
				
			}
		}
	}
	vector[0][0]=row;
	vector[0][1]=col;
	vector[0][2]=count;
	print_array(p);
}
void print_array(int p){
	int i;
	printf("\nThe vector representation of the array is =>\n");
	for(i=0;i<p;i++){
		printf("\n%3d %3d %3d\n",vector[i][0],vector[i][1],vector[i][2]);
	}
}
main(){
	int row,col,i,j;
	int done=1;
	while(done==1){
		
		printf("\nEnter the no of rows:");
		scanf("%d",&row);
		printf("\nEnter the no of columns:");
		scanf("%d",&col);
		if(row>MAXROW || col>MAXCOL){
			printf("\nInvalid Entry:");
		}
		else{
			done=0;
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\nEnter the elements of %dth row and %dth col ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	generate_sparse(row,col);
	
	
}
