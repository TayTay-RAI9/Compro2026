#include <stdio.h>

int main() {
    int num, i;
    int factor = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        factor = factor * i;
    }

    printf("Factorial of %d is %d\n", num, factor);
    return 0;
}