#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        n=arr[i];
        int copy=n;
        int sum=0;
        while(n>0){
            int d=n%10;
            sum=d+(sum*10);
            n=n/10;
        }
        if(sum==n){
            printf("YES");
        }
        else{
            printf("NO");
        }

    }
    return 0;
}