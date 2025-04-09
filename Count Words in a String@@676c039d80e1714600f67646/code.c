#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int word_count =1;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            word_count++;
        }
    }
    printf("%d",word_count);
    return 0;
}