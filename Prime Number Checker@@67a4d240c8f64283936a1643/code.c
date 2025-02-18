#include <stdio.h>
#include <stdbool.h> // Include this header for bool type

bool isPrime(int num);

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}
