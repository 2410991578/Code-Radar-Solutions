#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int t=n;
    n=m;
    m=t;
    printf("%d %d",n,m);
    return 0;
}