#include <stdio.h>

int main() {
    int size = 6;
    int sum = 0;
    int array[] = {3,1,2,4,5,6};
    int *p = array;
    for (int i = 0; i < 6; i++) {
        if (*(array + i) % 2 == 0){
            sum = sum + *(array + i);
        }
    }
    printf("The sum of even numbers is: %d", sum);
    return 0;

}