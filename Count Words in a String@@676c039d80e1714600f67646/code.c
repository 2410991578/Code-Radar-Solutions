#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int word_count =0;
    for(int i=0; str[i]!='\0'; i++){
        if(i==' ' || str[i]=='\n'){
            word_count++;
        }
    }
    printf("%d",word_count);
    return 0;
}