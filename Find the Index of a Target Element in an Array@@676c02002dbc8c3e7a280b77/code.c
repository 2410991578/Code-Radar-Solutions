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
    int index=0;
    for(int i=0; i<n; i++){
        if(arr[i]==t){
            index=i;
            break;
        }
        else{
            printf("-1");
            break;
        }
    }
    printf("%d",index);

    
    return 0;
}