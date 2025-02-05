#include<stdio.h>
#include<ctype.h>

int main(){
    char one;

    scanf("%c",&one);

    if(one=='a'||one=='e'||one=='i'||one=='o'||one=='u'||one=='A'||one=='E'||one=='I'||one=='O'||one=='U'){
        printf("Vowel");
    }
    else if(isdigit(one)){
        printf("Digit");
    }
    else if((!(isdigit(one)))&&(!(isalpha(one)))){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}