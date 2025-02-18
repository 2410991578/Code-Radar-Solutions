#include <stdio.h>
void isPrime();
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
void isPrime(){
    int count=0;
    for(int i=2; i<=n; i++){
        if(i%num){
            count++;
        }
    }
    if(count==2){
        printf("1");
    }
    else{
        printf("0")
    }
}




