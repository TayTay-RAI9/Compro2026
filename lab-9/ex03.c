#include <stdio.h>
int sum(int start, int end) {
    int total = 0;
    for (int i = start; i <= end; i++) {
        if ( i % 2 != 0) {
            total = total + i*i;
        }
    }
        return total;
}

int main() {
    int sumsquared;
    int start, end;
    printf("Enter two integers (start end): ");
    scanf("%d %d", &start, &end);
    sumsquared = sum(start,end);
    printf("%d", sumsquared);
    return 0;
}