#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    isPalindrome=1;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}
