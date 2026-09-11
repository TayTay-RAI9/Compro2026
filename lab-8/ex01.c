#include <stdio.h>

int main() {
    int test = 0;
    printf("%d\n", test);
    int *p;
    p = &test;
    *p = 99;
    printf("The address of the test variable is at: %p\n", p);
    printf("The new value of the test via pointer is: %d\n", test);
}