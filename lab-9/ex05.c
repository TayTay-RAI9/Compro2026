#include <stdio.h>

int sumEven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum = sum + arr[i];
        }
    }
    return sum;
}
int main() {
    int n;
    int arr[100];

    printf("N: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }
    int evenSum = sumEven(arr, n);
    int oddSum = sumOdd(arr, n);
    int evenCount = (n + 1) / 2;
    int oddCount = n / 2;
    float evenAverage = (float)evenSum / evenCount;
    printf("Output:\n");
    printf("Even index elements -> Sum: %d, Average: %.2f\n",evenSum, evenAverage);

    if (oddCount > 0) {
        float oddAverage = (float)oddSum / oddCount;

        printf("Odd index elements -> Sum: %d, Average: %.2f\n",oddSum, oddAverage);
    }
    else {
        printf("Odd index elements -> Sum: %d, Average: 0.00\n", oddSum);
    }

    return 0;
}