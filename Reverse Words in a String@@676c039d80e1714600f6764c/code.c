#include <stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int size;
    for(int i=0; str[i]!='\0'; i++){
        size++
    }
    for(int i=0,j=size-1; i<=j; i++,j--){
        int t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    printf("%s",str);
}