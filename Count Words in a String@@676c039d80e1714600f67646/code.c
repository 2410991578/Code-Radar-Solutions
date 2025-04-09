#include <stdio.h>
#include <stdbool.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int count_word =0;
    bool inWord = false;

    for(int i=0; str[i]!='\0'; i++){
        if (str[i] != ' ' && str[i] != '\n') {
            if (!inWord) {
                count_word++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    printf("%d",count_word);
    return 0;
}