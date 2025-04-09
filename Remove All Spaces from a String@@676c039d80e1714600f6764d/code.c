#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='\0'){
            str[i]=str[j];
            j++;
        }
        str[j]='\0';
    }
    printf("%s",str);
    return 0;
}