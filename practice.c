#include <stdio.h>

int main() {
    int a[100], min, max;

    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for (int j = 1; j < 10; j++) {
        if (a[j] > max) {
            max = a[j];
        }

        if (a[j] < min) {
            min = a[j];
        }
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}