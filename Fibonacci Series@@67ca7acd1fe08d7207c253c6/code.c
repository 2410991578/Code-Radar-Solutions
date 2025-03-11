#include <stdio.h>
void fibonacciSeries(int N);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        
    }
    else{
    fibonacciSeries(n);
    }
    return 0;
}
void fibonacciSeries(int N){
    int a=0;
    int b=1;
    int c;
    for(int i=1; i<=N; i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    }