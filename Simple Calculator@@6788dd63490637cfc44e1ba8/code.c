#include <stdio.h>
int main(){
    int a,b;
    char luck;
    scanf("%d" "%d" "%c",&a,&b,&luck);
    if(luck=='+'){
        return a+b;
    }
    else if(luck=='-'){
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
printf(main())
    return 0;
}