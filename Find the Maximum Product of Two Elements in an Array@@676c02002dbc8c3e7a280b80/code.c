#include <stdio.h>
int main(){
    int n,tmp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=(-1)*(arr[i]);
        }
    }
    int max=arr[0];
    int max2=arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(max!=arr[i]){
            if(max2<arr[i]){
                max2=arr[i];
            }
        }
    }
    printf("%d",max*max2);
    return 0;
}