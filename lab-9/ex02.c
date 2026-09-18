#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}
int main() {
    int start, end;
    int count = 0;
    int sum = 0;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    printf("The palindrome numbers within the interval [%d, %d] are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\nTotal palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %d\n", sum);
    return 0;
}