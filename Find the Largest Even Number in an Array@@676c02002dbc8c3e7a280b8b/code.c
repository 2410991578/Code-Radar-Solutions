#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int even =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even=1;
            if(max<arr[i]){
            max=arr[i];
            }
            
        }
    }
    if(!even){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
    return 0;
}