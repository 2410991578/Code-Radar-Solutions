#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    // To store printed value pairs
    int printedPairs[100][2]; // simple fixed size
    int printedCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i];
                int b = arr[j];

                // Check if this value pair was already printed
                int alreadyPrinted = 0;
                for (int k = 0; k < printedCount; k++) {
                    if ((printedPairs[k][0] == a && printedPairs[k][1] == b) ||
                        (printedPairs[k][0] == b && printedPairs[k][1] == a)) {
                        alreadyPrinted = 1;
                        break;
                    }
                }

                if (!alreadyPrinted) {
                    printf("%d %d\n", a, b);
                    printedPairs[printedCount][0] = a;
                    printedPairs[printedCount][1] = b;
                    printedCount++;
                }
            }
        }
    }

    return 0;
}
