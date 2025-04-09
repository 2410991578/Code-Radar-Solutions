#include <stdio.h>
int main(){
char str[100];
scanf("%[^\n]s",str);
int max=0;
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
    if(str[i]>max){
        max=str[i];
    }
}
printf("%s",str);
return 0;
}