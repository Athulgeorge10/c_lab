#include<stdio.h>

struct Polynomial{
	int coeff;
	int expo;
};

void main(){
	int num;
	printf("Enter the degree of polynomial: ");
	scanf("%d", &num);
	struct Polynomial terms [num];
	for(int i=0; i<num; i++){
		printf("Enter the coefficient: ");
		scanf("%d", &terms[i].coeff);
		printf("Enter the exponent: ");
		scanf("%d", &terms[i].expo);
	}
	printf("Polynomial: ");
	for(int i=0; i<num; i++){
		if(terms[i].expo!=0){
			printf("%dx^%d", terms[i].coeff, terms[i].expo);
		}
		if(i!=(num-1)){
			printf("+");
		}
		if(terms[i].expo==0){
			printf("%d", terms[i].coeff);
		}
	}
	printf("\n");
}
