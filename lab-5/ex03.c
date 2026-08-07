#include <stdio.h>

int main() {
    int a[5], sum = 0;
    int max;

    for (int n = 0; n < 5; n++) {
        printf("Enter the marks of student %d: ", n + 1);
        scanf("%d", &a[n]);
    }
    max = a[0];

    for (int i = 0; i < 5; i++) {
        sum += a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Total sum of marks: %d\n", sum);
    printf("Highest mark: %d\n", max);

    return 0;
}
