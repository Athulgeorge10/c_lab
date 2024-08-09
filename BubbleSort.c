#include<stdio.h>
 
void main(){
	int n,temp,t=0;
	t++;
	printf("Enter no of elements: ");
	t++;
	scanf("%d",&n);
	t++;
	int A[n];
	t++;
	printf("Enter %d elements of array\n",n);
	t++;t+=n+1;
	for(int i=0;i<n;i++){
		t++;
		scanf("%d",&A[i]);
	}
	t+=n+1;
	for(int i=0; i<n-1; i++){
		t++;t+=n+1;
		for(int j=0; j<n-i-1; j++){
			if(A[j]>A[j+1]){
				t++;
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	printf("\nSorted Array: ");
	t++;
	t+=(n+1);
	for(int i=0; i<n; i++){
		printf("%d\t", A[i]);
		t++;
	}
	printf("\nSpace Complexity: %d", 20	` +(n*4));
	printf("\nTime Complexity: %d\n", t);
}
	
