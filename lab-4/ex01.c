#include <stdio.h>;

int main() {
    int sum = 0, num,i;
    float avg;

    for (i = 0; i < 10; i++) {
        printf("Enter the number:");
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = sum / 10.0;
    printf("total sum is %d\n", sum);
    printf("Average is %0.2f\n", avg);

    return 0;
}
