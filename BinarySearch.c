#include<stdio.h>
 
void main(){
	int n, x,temp,t=0,flag=0,mid;
	t++;
	printf("Enter no of elements: ");
	t++;
	scanf("%d",&n);
	t++;
	int A[n],l=0,r= n-1;
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
	printf("Enter the element to be searched:");
	t++;
	scanf("%d",&x);
	t++;t++;
	while(l<=r){
		t++;t++;
		mid=(l+r)/2;
		if(A[mid]==x){
			t++;
			flag = 1;
			break;
		}
		else if(A[mid]>x){
			t++;
			r=mid-1;
		}
		else{
			t++;
			l=mid+1;
		}
	}
	if(flag==0){
		t++;
		printf("Element not found");
	}
	else{
		t++;
		printf("Element found at pos %d\n",mid);
	}
	t+=2;
	printf("\nTime complexity = %d\n",t);
	printf("Space complexity = %d\n",32+(4*n));
}
	
