#include <stdio.h>

int main() {
    int num1;
    printf("Enter a number 1-100: ");
    scanf("%d", &num1);

    if (num1 > 100 || num1 < 1) {
        printf("out of range");
    }
    else if (num1 % 2 == 1) {
        printf("odd");
    }
    else {
        printf("even");
    }
        
    return 0;
 }