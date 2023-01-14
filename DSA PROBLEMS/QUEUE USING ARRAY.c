#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
static int q[MAXSIZE];
int rear=-1,front=-1;
void add(int element){
	if(rear==(MAXSIZE-1)){
		queue_full();
	}
	else{
		rear=rear+1;
		q[rear]=element;
	}
}
int del(){
	int element;
	if(rear==front){
		queue_empty();
	}
	else{
		front=front+1;
		element=q[front];
		q[front]=0;
		return element;
	}
}
queue_full(){
	printf("\nSorry!!The queue is full!!");
}
queue_empty(){
	printf("\nSorry!!The queue is empty!!");
}
display_queue(){
	int i;
	for(i=0;i<MAXSIZE;i++){
		printf("%3d",q[i]);
	}
	
}
main(){
	char c='1';
	int element;
	while(c!='3'){
		printf("\nPresent Queue elements are:");
		display_queue();
		printf("\nPress 1 for ADD");
		printf("\nPress 2 for DEL");
		printf("\nPress 3 for exit");
		printf("\nEnter your choice:");
		fflush(stdin);
		c=getche();
		if(c=='1'){
			printf("\nEnter the element to be added in the queue:");
			scanf("%d",&element);
			add(element);
		}
		if(c=='2'){
			element=del();
			printf("\nThe detected element is %d",element);
		}
		if(c=='3'){
			printf("\nThank you!!");
			break;
		}
	}
}
