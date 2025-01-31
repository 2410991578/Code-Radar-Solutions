#include <stdio.h>
void reverse(int arr[],int a,int b);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int a,int b){
    for(int i=a,j=b; i<j; i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
}