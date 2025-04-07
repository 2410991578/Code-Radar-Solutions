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
        int index=0
        for(int j=i+1; j<n; j++){
            if(arr[j]==t){
                printf("%d",index);
            }
        }
    }

    
    return 0;
}