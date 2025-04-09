#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int size=0;
    int count =0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' || str[i]=='\n'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}