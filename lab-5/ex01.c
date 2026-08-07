#include <stdio.h>

int main() {
    int n, i, a[10];
    for (n = 0; n < 10; n++) {
        printf("Enter the value %d here:", n);
        scanf("%d", &a[n]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d", a[i]);
        n++;
    }
    return 0;
}