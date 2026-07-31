#include <stdio.h>

int main() {
    int num = 1; 
    while ( num != 0) {
        printf("Enter a number:");
        scanf("%d", &num);
        if (num ==0) {
            printf("Goodbye!");
            break;
        }

        if (num % 2 == 1) {
            printf("%d is odd\n", num);
        }
        else {
            printf("%d is even\n", num);
        }
    }
    return 0;
    
}