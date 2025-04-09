#include <stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]",str);
    int size=0;
    for(int i=0; str[i]!='\0'; i++){
        size++;
    }
    printf("%d",size);
    return 0;
}