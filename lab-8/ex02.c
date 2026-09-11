#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    printf("Before swap: %d, %d, %d\n", a,b,c);

    int temp = a;
    *p1 = b;
    *p2 = c;
    *p3 = temp;



    printf("%d, %d, %d", a,b,c);
    return 0;
} 