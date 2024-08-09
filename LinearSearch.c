
#include<stdio.h>
 
void main(){
	int n, i, x, count,t=0;
	t++;
	printf("Enter no of elements: ");
	t++;
	scanf("%d",&n);
	t++;
	int A[n];
	t++;
	printf("Enter %d elements of array\n",n);
	t++;t+=n+1;
	for(i=0;i<n;i++){
		t++;
		scanf("%d",&A[i]);
	}
	printf("Enter the element to be searched:");
	t++;
	scanf("%d",&x);
	t++;t+=n+1;
	for(i=0;i<n;i++){
		if(A[i]==x){
			t++;
			count++;
			printf("Element found at pos %d.\n",i+1);
		}
	}
	if(count==0){
		t++;
		printf("Element not found!");
	}
	else{
		t++;
		printf("Element found %d time(s).",count);
	}
	t+=2;
	printf("\nTime complexity = %d\n",t);
	printf("Space complexity = %d\n",24+(4*n));
}
