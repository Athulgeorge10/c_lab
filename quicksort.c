#include<stdio.h>
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[],int low,int high) {
    int i,j;
    int pivot=arr[low];
    i=low;
    j=high;
    while(i<j) {
    	while(arr[i]<=pivot) {
            i++;
        }
        while(arr[j]>pivot) {
            j--;
        }
        if(i<j) {
            swap(arr,i,j);
        }
    }
    swap(arr,low,j);
    return j;
}
void quick_sort(int arr[],int low,int high) {
    if(low<high) {
        int loc=partition(arr,low,high);
        quick_sort(arr,low,loc-1);
        quick_sort(arr,loc+1,high);
    }
}
int main() {
    int arr[100],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    printf("sorted array using quick sort\n");
    for(i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
