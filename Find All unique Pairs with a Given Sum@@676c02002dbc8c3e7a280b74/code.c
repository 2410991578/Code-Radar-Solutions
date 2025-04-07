#include <stdio.h>

int main() {
    int n, arr[100], target, printed[100][2], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i], b = arr[j], found = 0;

                for (int k = 0; k < count; k++) {
                    if ((printed[k][0] == a && printed[k][1] == b) ||
                        (printed[k][0] == b && printed[k][1] == a)) {
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("%d %d\n", a, b);
                    printed[count][0] = a;
                    printed[count][1] = b;
                    count++;
                }
            }
        }
    }

    return 0;
}
