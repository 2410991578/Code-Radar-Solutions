#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int printed = 0; // flag to check if we printed 1 1 already

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                int a = arr[i];
                int b = arr[j];

                // ensure we only print (a,b) once
                int alreadyPrinted = 0;
                for(int k = 0; k < i; k++) {
                    for(int l = k + 1; l < n; l++) {
                        if(arr[k] + arr[l] == target) {
                            if((arr[k] == a && arr[l] == b) || (arr[k] == b && arr[l] == a)) {
                                alreadyPrinted = 1;
                                break;
                            }
                        }
                    }
                    if(alreadyPrinted) break;
                }

                if(!alreadyPrinted) {
                    printf("%d %d\n", a, b);
                }
            }
        }
    }

    return 0;
}
