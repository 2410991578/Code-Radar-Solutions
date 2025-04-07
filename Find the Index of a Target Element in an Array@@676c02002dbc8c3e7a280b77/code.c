# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int index=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==t){
            index=i;
            break;
        }
    }
    if(index==-1){
        printf("-1");
    }
    else{
        printf("%d",index);
    }
    
    return 0;
}