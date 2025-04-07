#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int target;
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                int a = arr[i], b = arr[j];
                // Check if we've already printed this value pair
                int found = 0;
                for(int k = 0; k < i; k++) {
                    for(int l = k + 1; l < n; l++) {
                        if((arr[k] == a && arr[l] == b) || (arr[k] == b && arr[l] == a)) {
                            if(arr[k] + arr[l] == target) {
                                found = 1;
                                break;
                            }
                        }
                    }
                    if(found) break;
                }
                if(!found)
                    printf("%d %d\n", a, b);
            }
        }
    }

    return 0;
}
