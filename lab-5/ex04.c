#include <stdio.h>

int main() {
    int a[10],sum = 0;
    int odd=0, even=0;

    for (int n = 0; n < 10; n++) {
        printf("Please enter value %d: ", n + 1);
        scanf("%d", &a[n]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 1){
            odd++;
        }
        else {
            even++;
        }
    }

    printf("even numbers: %d\n", even);
    printf("odd numbers: %d\n", odd);

    return 0;
}