#include <stdio.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);
if(n>m){
    printf("First");
}
else if(n<m){
    printf("Second");
}
else{
    printf("Equal");
}
}