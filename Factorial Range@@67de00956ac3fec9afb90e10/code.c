#include <stdio.h>
void factorialRange(int n,int m){
    int factorial=1;
    for(int i=n; i<=m; i++){
        int factorial=1;
        for(int j=1; j<=i ;j++){
            factorial=factorial*j;
            
        }
        printf("%d\n",factorial);
       
    }
}
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    if(start==0){
        printf("1");
    }
    else{
        factorialRange(start,end);
    }
    return 0;
    
}