#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Expected sum of first (n-1) natural numbers
    int expected_sum = (n * (n + 1)) / 2;
    
    // Output the anomaly
    printf("%d", sum - expected_sum);
    return 0;
}
