#include <stdio.h>

int main() {
    int i, num, mult = 1, pro;
    printf("Enter a number:");
    scanf("%d", &num);
    for ( i = 0; i < 12; i++) {
        pro = num * mult;
        printf("%d x %d = %d\n", num, mult, pro);
        mult = mult + 1;
    }
    return 0;
}