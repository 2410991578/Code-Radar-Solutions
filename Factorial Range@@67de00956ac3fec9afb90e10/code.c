#include <stdio.h>
int FactorialRange(int n,int m){
    int factorial=1;
    for(int i=n; int i<=m; i++){
        factorial=factorial*i;
        printf("%d",factorial);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    FactorialRange(n,m);
    return 0;
    
}