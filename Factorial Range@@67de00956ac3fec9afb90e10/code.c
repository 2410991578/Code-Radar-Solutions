#include <stdio.h>
int FactorialRange(int n,int m){
    int factorial=1;
    for(int i=n; i<=m; i++){
        factorial=factorial*i;
        printf("%d\n",factorial);
    }
}
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    FactorialRange(start,end);
    return 0;
    
}