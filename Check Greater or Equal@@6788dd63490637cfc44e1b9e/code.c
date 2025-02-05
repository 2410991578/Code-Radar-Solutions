#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m || n==m){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}