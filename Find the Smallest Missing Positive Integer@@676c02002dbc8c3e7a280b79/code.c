#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int r=(n*(n-1))/2;
    printf("%d",sum-r);
    return 0;
}