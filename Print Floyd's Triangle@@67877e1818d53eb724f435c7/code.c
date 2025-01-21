#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = 1 ; 
    for(int i=1 ; i<n ; i++){
        for(int j=1 ; j<i+1 ; j++){
            printf("%d ",ans);
            ans++ ; 
    }
    printf("\n");
    }
    return 0;

}