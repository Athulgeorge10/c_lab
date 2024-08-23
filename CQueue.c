#include <stdio.h>


int front = -1, rear = -1;
int n;
int q[20];

void enqueue(){
	int item;
	if(front == (rear+1)%n){
		printf("\nOverflow!\n");
	}
	else if(front == -1 && rear == -1){
		printf("Enter the item to insert: ");
		scanf("%d", &item);
		rear++;front++;
		q[rear] = item;
		printf("Item has been inserted.");
	}
	else{
		printf("Enter the item to insert: ");
		scanf("%d", &item);
		rear = (rear+1)%n;
		q[rear] = item;
		printf("Item has been inserted.");
	}
}

void dequeue(){
	int item;
	if(front==-1 && rear==-1){
		printf("\nUnderflow!\n");
	}
	else if(front == rear){
		item = q[front];
		front=-1; rear=-1;
		printf("Item deleted from stack is %d.", item);
	}
	else{
		item = q[front];
		front = (front+1)%n;
		printf("Item deleted from stack is %d.", item);
	}
}

void display(){
	if(front==-1 && rear==-1){
		printf("\nCQueue is empty!\n");
	}
	else{
		int i = front;
		printf("CQueue: ");
		while(1){
			printf("%d\t", q[i]);
			if(i==rear){
				break;
			}
			i=(i+1)%n;
		}
		printf("\n");
	}
}

void main(){
	int opt;
	char ch='y';
	printf("Enter size of Queue: ");
	scanf("%d", &n);
	do{
		printf("\n\n***MENU***");
		printf("\n[1] Insert to queue");
		printf("\n[2] Delete from queue");
		printf("\n[3] Display the queue");
		printf("\n[0] exit");
		printf("\nEnter Option: ");
		scanf("%d", &opt);
		switch(opt){
			case 1:
				enqueue();
				break;
			
			case 2:
				dequeue();
				break;
			
			case 3:
				display();
				break;
			
			case 0:
				ch = 'n';
				break;
			
			default:
				printf("!!Invalid Option!!");
		}
	}while(ch == 'y' || ch == 'Y');
	printf("\nExiting...\n");
}
