#include <stdio.h>
void fibonacci(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=1; i<=n; i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    }
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
    }
    fibonacci(n);
    return 0;
}