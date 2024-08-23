#include <stdio.h>


int top = -1;
int n;
int s[20];

void push(){
	int item;
	if(top >= n-1){
		printf("\nOverflow!\n");
	}
	else{
		printf("Enter the item to insert: ");
		scanf("%d", &item);
		top++;
		s[top] = item;
		printf("Item has been inserted.");
	}
}

void pop(){
	int item;
	if(top == -1){
		printf("\nUnderflow!\n");
	}
	else{
		item = s[top];
		top--;
		printf("Item deleted from stack is %d.", item);
	}
}

void display(){
	if(top==-1){
		printf("\nStack is empty!\n");
	}
	else{
		printf("Stack : ");
		for(int i=0; i<=top; i++){
			printf("%d\t",s[i]);
		}
		printf("\n");
	}
}

void main(){
	int opt, top=-1;
	char ch='y';
	printf("Enter size of array: ");
	scanf("%d", &n);
	do{
		printf("\n\n***MENU***");
		printf("\n[1] Push to stack");
		printf("\n[2] Pop from stack");
		printf("\n[3] Display the stack");
		printf("\n[0] exit");
		printf("\nEnter Option: ");
		scanf("%d", &opt);
		switch(opt){
			case 1:
				push();
				break;
			
			case 2:
				pop();
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
		
