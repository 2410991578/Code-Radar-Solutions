#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=1; i<=arr[i]; i++){
        if(arr[i]%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d",arr[i]);
    }
    else{
        printf("0");
    }
    return 0;
}