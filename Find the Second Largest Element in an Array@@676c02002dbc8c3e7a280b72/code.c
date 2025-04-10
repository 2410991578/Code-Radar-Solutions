#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int largest=-15678;
    int second_largest=-15678;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    
    if(second_largest==-15678){
        printf("-1");
    }
    else{
        printf("%d",second_largest);
    }
    return 0;
}