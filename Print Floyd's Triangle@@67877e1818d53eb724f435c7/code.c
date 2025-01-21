#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int ans = 1 ; 
    for(int i=1 ; i<N ; i++){
        for(int j=1 ; j<i+1 ; j++){
            printf("%d ",ans);
            ans++ ; 
    }printf("\n");
    }
    return 0;

}