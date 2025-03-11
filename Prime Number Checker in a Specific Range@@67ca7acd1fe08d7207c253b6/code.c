#include<stdio.h>
int isPrime(int a,int b){
    int count=0;
    for(int i=a; i<b; i++){
        count++;
    }
    if(count=2){
        printf("prime");
    }
    else{
        printf("No prime numbers");
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",isPrime(a,b));
    return 0;

}