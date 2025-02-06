#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}