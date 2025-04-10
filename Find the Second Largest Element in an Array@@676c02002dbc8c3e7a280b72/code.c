#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int largest=0;
    int second_largest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    if(second_largest==-1){
        printf("-1");
    }
    else{
        printf("%d",second_largest);
    }
    return 0;
}