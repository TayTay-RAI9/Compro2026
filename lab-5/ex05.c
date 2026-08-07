#include <stdio.h>

int main() {
    int a[8];
    int max, min;

    for (int n = 0; n < 8; n++) {
        printf("Enter the marks of student %d: ", n + 1);
        scanf("%d", &a[n]);
    }
    max = a[0];
    min = a[0];

    for (int i = 0; i < 8; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < 8; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Lowest mark: %d\n", min);
    printf("Highest mark: %d\n", max);

    return 0;
}
