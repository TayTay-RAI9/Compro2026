#include <stdio.h>

int main() {
    int i=0, num, sum = 0; 
    while ( i < 10) {
        printf("Enter the number:");
        scanf("%d", &num);
        sum = sum + num;
        i = i + 1;

    }
    printf("The sum is %d", sum);
    return 0;
}