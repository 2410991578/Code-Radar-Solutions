#include <stdio.h>
int main(){
    char str[100],ar[100];
    scanf("%[^\n]s",str);
    int j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='\0'){
            ar[i]=str[j];
            j++;
        }
       
    }
     ar[j]='\0';
    printf("%s",str);
    return 0;
}