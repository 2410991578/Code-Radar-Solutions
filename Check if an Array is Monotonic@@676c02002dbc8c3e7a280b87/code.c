#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int check ;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1] || arr[i] <= arr[i+1]){
            printf("YES");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
    return 0;
}