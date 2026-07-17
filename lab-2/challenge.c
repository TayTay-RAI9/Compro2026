#include <stdio.h>

int main(){
    int num1, num2, num3, max, min, sum;

    printf("Enter 3 numbers:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    min = num1;
    if (min > num2) {
        min = num2;
    }
    if (min > num3) {
        min = num3;
    }
    
    max = num1; 
    if (max < num2) {
        max = num2;
    }
    if (max < num3) {
        max = num3;
    }

    sum = num1 + num2 + num3;

    printf("minimum value is %d\n The maximum value is %d\n Total sum is %d\n The average is %d", min, max, sum, sum/3);
    return 0;
}