#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 8;
    for (n; n >= 0; n--){
        printf("%d ", original[n]);
    }
    return 0;
}

    