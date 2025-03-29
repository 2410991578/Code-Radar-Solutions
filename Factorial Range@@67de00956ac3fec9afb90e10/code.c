#include <stdio.h>
int FactorialRange(int n,int m){
    int factorial=1;
    for(int i=n; i<=m; i++){
        factorial=factorial*i;
        printf("%d\n",factorial);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    FactorialRange(n,m);
    return 0;
    
}