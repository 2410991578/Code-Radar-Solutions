#include <stdio.h>
int main(){
    int a,b;
    char luck;
    scanf("%d" "%d",&a,&b);
    scanf(" %c",&luck);
    if(luck=='+'){
        printf("%d",a+b);
    }
    if(luck=='-'){
        printf("%d",a-b);
    }
    else if(luck=='*'){
        printf("%d",a*b);

    }
    else if(luck=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}