#include <stdio.h>
int main(){
    char str[50];
    scanf("%s",str);
    char vowel='a','o','i','e','u';
    int count =0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==vowel){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}