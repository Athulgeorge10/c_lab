#include<stdio.h>
int main(){
    int n,t=1;
    int arr[30];
    t++;
    printf("Enter the no of elements:");
    t++;
    scanf("%d",&n);
    t++;
    printf("Enter the elements:");
    t++;
    t+=(n+1);
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
        t++;
    }
    int i=0;
    while(i<n-1){
        t++;
        int s=i;
        int j=i+1;
        while(j<n){
            if(arr[j]<arr[s]){
                s=j;
                t++;
            }
            j++;
        }
        if(i!=s){
            int temp=arr[s];
            arr[s]=arr[i];
            arr[i]=temp;
            t+=3;
        }
        i++;
    }
    printf("\nSorted array is:");
    t++;
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    } 
    printf("\nSpace Complexity:%d",24+(n*4));
    printf("\nTime Complexity:%d",t);
    return 0;
}
