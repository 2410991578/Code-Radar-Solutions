#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1; i>j; i++,j--){
        if(arr[i]!=arr[j]){
            printf("NO");
            break;
        } 
        else{
            printf("YES");
            break;
        }

    }
    return 0;    
}