#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==i++ || arr[i]==i--){
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