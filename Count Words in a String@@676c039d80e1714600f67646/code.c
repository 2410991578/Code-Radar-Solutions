#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int count=0;
    int inword=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' || str[i]=='\n'){
            inword=0;
        }
        else if(inword==0){
           
            inword=1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}