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
    for(int i=0; i<n; i++){
        int index=i;
        if(arr[i]==t){
            printf("%d",index);
            break;
        }
        else if(arr[i]!=t){
            printf("-1");
            break;
        }
    
    }

    
    return 0;
}