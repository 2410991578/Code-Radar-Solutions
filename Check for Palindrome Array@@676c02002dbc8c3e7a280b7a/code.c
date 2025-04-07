#include <stdio.h>

int main() {
    int n, i, isPalindrome = 1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            printf("NO");
            break;
        }
        else{
            printf("YES");
        }
    }
    // if (isPalindrome) {
    //     printf("YES");
    // } else {
    //     printf("NO");
    // }

    return 0;
}
