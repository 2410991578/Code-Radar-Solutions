#include <stdio.h>
void FactorialRange(int n,int m){
    int factorial=1;
    for(int i=n; i<=m; i++){
        for(int j=1; j<=i ;j++){
            factorial=factorial*i;
            
        }
        printf("%d\n",factorial);
       
    }
}
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    if(start<0){
        printf("1");
    }
    else{
        FactorialRange(start,end);
    }
    return 0;
    
}